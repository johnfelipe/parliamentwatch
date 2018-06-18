# Parliamentwatch

## Getting started

1. Install [VirtualBox](https://www.virtualbox.org/wiki/Downloads)
1. Install [Vagrant](http://vagrantup.com)
1. `$ git clone -b develop git@github.com:parliamentwatch/parliamentwatch.git`
1. `$ cd parliamentwatch`
1. `$ export AW_USERNAME=... AW_PASSWORD=...`
1. `$ vagrant up`
1. Open [http://localhost:8080](http://localhost:8080) in your browser.

In case `vagrant up` exits with the error "No guest IP was given to the Vagrant core NFS helper...", run `vagrant reload --provision`.

## Vagrant

The virtual machine for local development is managed with Vagrant. There are two provisioners which are executed automatically when running `vagrant up` for the first time or when provisioning is requested explicitly. The *bootstrap* provisioner installs and configures the packages. The *database* provisioner downloads the latest backup from http://backups.parliamentwatch.org, loads it into the database and reverts the features. It needs HTTP Basic credentials in order to download the backup. Those can be exported to the shell:

    $ export AW_USERNAME=... AW_PASSWORD=...

Both provisioners can be executed by name:

    $ vagrant provision --provision-with bootstrap
    $ vagrant provision --provision-with database

## Git commit messages

Please follow these [guidelines for commit messages](http://tbaggery.com/2008/04/19/a-note-about-git-commit-messages.html).

## Coding standards

Please follow the [coding standards](https://www.drupal.org/coding-standards) and the [API documentation and comment standards](https://www.drupal.org/coding-standards/docs) of the Drupal community. 

## Theme assets

Theme assets are managed with Grunt tasks. To build the assets initially run the following commands:

    $ cd src
    $ npm install
    $ node_modules/.bin/grunt build

## Translations

Translations for contributed and custom modules are managed with [Localization update](https://drupal.org/project/l10n_update). To update translations for contributed modules update the translations in your development environment with `drush l10n-update` and commit the changes. On the live environment updates will only be sourced from the files in sites/all/translations. Translations for custom modules and themes are all stored in the PO file for PW Globals. To update translations for custom modules and themes:

    $ drush en potx
    $ cd /vagrant/
    $ make general.pot
    $ msgmerge -U -N httpdocs/sites/all/translations/pw_globals-<version>.de.po general.pot
    $ drush l10n-update-refresh
    $ drush l10n-update

When the version of PW Globals changes the PO file needs to be renamed accordingly.
