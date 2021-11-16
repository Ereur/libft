#!/bin/bash

git add $1

#echo "enter message to commit"
#read message

git commit -m $2

git push

