#!/usr/bin/env bash

if [ -z "$AW_USERNAME" ] || [ -z "$AW_PASSWORD" ]; then
	echo "In order to fetch the latest database backup your username and"
	echo "password for http://backups.parliamentwatch.org are required."
	echo "Please provide those credentials as environment variables"
	echo "AW_USERNAME and AW_PASSWORD."
	exit 1
fi

curl -u$AW_USERNAME:$AW_PASSWORD -sS http://backups.parliamentwatch.org/abgeordnetenwatch.de/abgeordnetenwatch.de_latest.sql.gz | gunzip > /tmp/backup.sql
drush sql-cli < /tmp/backup.sql
drush cc all
drush fr-all -y
