#!/bin/bash
g++ creat.cpp -o creat
sudo cp creat /usr/local/bin
sudo cp MODEL.cpp /etc
echo "Now you can try it by 'creat number' command"
echo "You can modify the MODEL.cpp in /etc floder."
