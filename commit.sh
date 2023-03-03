#!/bin/bash
# shortcut for pushing code to github
read -p "Enter your commit message: " -a commit_message
concat="${commit_message[@]}"
git add .
git commit -m "$concat"
git push
