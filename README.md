# Parliamentwatch

## Getting started

1. Install [VirtualBox](https://www.virtualbox.org/wiki/Downloads)
1. Install [Vagrant](http://vagrantup.com)
1. `$ git clone git@github.com:parliamentwatch/parliamentwatch.git`
1. `$ cd parliamentwatch`
1. `$ export AW_USERNAME=... AW_PASSSWORD=...`
1. `$ vagrant up`
1. Open [http://localhost:8080](http://localhost:8080) in your browser.

## Vagrant

The virtual machine for local development is managed with Vagrant. There are two provisioners which are executed automatically when running `vagrant up` for the first time or when provisioning is requested explicitly. The *bootstrap* provisioner installs and configures the packages. The *database* provisioner downloads the latest backup, loads it into the database and reverts the features. Accessing the backup requires credentials which need to be made available to the shell environment before running the database provisioner:

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

    $ cd sites/all/themes/custom/parliamentwatch/build
    $ npm install
    $ grunt build
