# -*- mode: ruby -*-
# vi: set ft=ruby :

# All Vagrant configuration is done below. The "2" in Vagrant.configure
# configures the configuration version (we support older styles for
# backwards compatibility). Please don't change it unless you know what
# you're doing.
Vagrant.configure(2) do |config|

  config.vm.define "default", primary: true do |drupal|
    drupal.vm.box = "ubuntu/trusty64"
    drupal.vm.hostname = "aw.local"
    drupal.vm.network "forwarded_port", guest: 80, host: 8080
    drupal.vm.network "private_network", ip: "192.168.93.216"

    drupal.vm.provider "virtualbox" do |vb, override|
      vb.cpus = 2
      vb.linked_clone = true
      vb.memory = 2048
      override.vm.synced_folder ".", "/vagrant",
        type: "nfs",
        linux__nfs_options: ['rw', 'no_subtree_check', 'all_squash', 'async']
    end

    drupal.vm.provider "lxc" do |l, override|
      override.vm.box = "fgrehm/trusty64"
      override.vm.synced_folder ".", "/vagrant",
        type: "rsync",
        rsync__exclude: ".git/"
    end

    drupal.vm.provision "bootstrap",
      type: "shell",
      path: "provisioning/bootstrap.sh"
    drupal.vm.provision "database",
      type: "shell",
      path: "provisioning/database.sh",
      env: {
        "AW_USERNAME": ENV["AW_USERNAME"],
        "AW_PASSWORD": ENV["AW_PASSWORD"]
      }
  end

  config.vm.define "solr", autostart: false do |solr|
    solr.vm.box = "debian/jessie64"
    solr.vm.hostname = "aw-solr.local"
    solr.vm.network "private_network", ip: "192.168.93.217"

    solr.vm.provider "virtualbox" do |vb, override|
      vb.cpus = 1
      vb.linked_clone = true
      vb.memory = 512
    end

    solr.vm.provision "shell", inline: <<-SHELL
      export DEBIAN_FRONTEND=noninteractive
      apt-get -y update
      apt-get -y install \
        solr-jetty
      adduser vagrant adm
      cp /vagrant/provisioning/etc/default/jetty8 /etc/default/
      cp /vagrant/sites/all/modules/contrib/search_api_solr/solr-conf/3.x/* \
        /usr/share/solr/conf/
      service jetty8 restart
    SHELL

    solr.vm.synced_folder ".", "/vagrant",
      type: "rsync",
      rsync__exclude: ".git/"
  end
end
