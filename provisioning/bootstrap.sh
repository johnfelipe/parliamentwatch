#!/usr/bin/env bash
export DEBIAN_FRONTEND=noninteractive
cp -r /vagrant/provisioning/etc/* /etc/
apt-key add /vagrant/provisioning/nodesource.gpg.key
apt-get update
apt-get -y upgrade
apt-get -y install \
	drush \
	git \
	libapache2-mod-php5 \
	mysql-server \
	nodejs \
	php5-apcu \
	php5-cli \
	php5-curl \
	php5-gd \
	php5-mysql \
	php5-xdebug \
	ruby-sass \
	solr-jetty \
	vim-nox
apt-get -y autoremove

npm install -g grunt

adduser vagrant adm

chmod -R u+w /vagrant/sites/default
cp /vagrant/provisioning/settings.php /vagrant/sites/default/
cp /vagrant/sites/all/modules/contrib/search_api_solr/solr-conf/3.x/* /usr/share/solr/conf/

php5enmod vagrant

# Create folder for private files
if [ ! -d /srv/drupal/private ]; then
	mkdir -p /srv/drupal/private
	chown -R www-data:root /srv/drupal/private
fi

# Create the database.
if [ ! -d /var/lib/mysql/drupal ]; then
	mysqladmin -u root create drupal
fi

# Enable the required web server modules
if [ ! -L /etc/apache2/mods-enabled/rewrite.load ]; then
        a2enmod rewrite
fi

if [ ! -L /etc/apache2/mods-enabled/proxy.load ]; then
        a2enmod proxy
fi

if [ ! -L /etc/apache2/mods-enabled/proxy_http.load ]; then
        a2enmod proxy_http
fi

if [ ! -L /etc/apache2/mods-enabled/ssl.load ]; then
        a2enmod ssl
fi

# Disable the system's default virtual host.
if [ -L /etc/apache2/sites-enabled/000-default.conf ]; then
	a2dissite 000-default
fi

# Enable the Drupal website as the default virtual host.
if [ ! -L /etc/apache2/sites-enabled/drupal.conf ]; then
	a2ensite drupal
fi

service apache2 restart
service jetty restart
