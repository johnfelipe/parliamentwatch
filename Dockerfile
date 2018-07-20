FROM debian:stretch AS web
ENV DEBIAN_FRONTEND noninteractive
RUN apt-get update && apt-get install -y \
	libapache2-mod-php \
	php-apcu \
	php-curl \
	php-gd \
	php-mbstring \
	php-mcrypt \
	php-mysql \
	php-xdebug \
	php-xml \
	php-zip
COPY httpdocs /srv/abgeordnetenwatch.de/httpdocs
COPY provisioning/etc/php/7.0/mods-available/* /etc/php/7.0/mods-available/
RUN phpenmod development
COPY provisioning/etc/apache2/sites-available/* /etc/apache2/sites-available/
RUN a2enmod \
	proxy_http \
	rewrite \
	ssl
RUN a2dissite 000-default
RUN a2ensite drupal
EXPOSE 80
CMD ["/usr/sbin/apache2ctl", "-D", "FOREGROUND"]

FROM web AS cli
ENV DEBIAN_FRONTEND noninteractive
RUN apt-get update && apt-get install -y \
	curl \
	gettext \
	git \
	gnupg \
	make \
	mariadb-client \
	php-cli
RUN curl -sL https://deb.nodesource.com/setup_8.x -o nodesource_setup.sh
RUN bash nodesource_setup.sh
RUN apt-get install -y nodejs
COPY provisioning/etc/drush/* /etc/drush/
COPY provisioning/drush.phar /usr/local/bin/drush
RUN chmod +x /usr/local/bin/drush
WORKDIR /srv/abgeordnetenwatch.de
ENTRYPOINT ["bash"]
