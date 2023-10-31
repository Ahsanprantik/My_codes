rsync --progress /path/to/user/profile/backup/here  /home/`whoami`
sudo apt-key add ~/Repo.keys
sudo cp -R ~/sources.list* /etc/apt/
sudo apt-get update
sudo apt-get install dselect