dpkg --get-selections > ~/Package.list
sudo cp -R /etc/apt/sources.list* ~/
sudo apt-key exportall > ~/Repo.keys
rsync --progress /home/`whoami` /path/to/user/profile/backup/here