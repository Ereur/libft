#!/bin/bash

git add *

echo "enter message to commit"
read message

git commit -m "$message"

git push

