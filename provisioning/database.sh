#!/usr/bin/env bash

if [ -z "$AW_USERNAME" ] || [ -z "$AW_PASSWORD" ]; then
	echo "In order to fetch the latest database backup your username and"
	echo "password for http://backups.parliamentwatch.org are required."
	echo "Please provide those credentials as environment variables:"
	echo "export AW_USERNAME=... AW_PASSWORD=..."
	exit 1
fi

echo "This will take a few minutes. Please be patient."
echo "Downloading latest backup from http://backups.parliamentwatch.org/abgeordnetenwatch.de/abgeordnetenwatch.de_latest.sql.gz..."
wget --http-user=$AW_USERNAME --http-password=$AW_PASSWORD --progress=bar:force -qO- http://backups.parliamentwatch.org/abgeordnetenwatch.de/abgeordnetenwatch.de_latest.sql.gz | gunzip > /tmp/backup.sql
echo "Loading data..."
drush sql-drop -y -p
drush sql-cli -p < /tmp/backup.sql
echo "Running update hooks..."
drush updb -y -p
echo "Resetting configuration..."
drush fr-all -y -p
