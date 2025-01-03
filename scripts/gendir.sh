#!/bin/bash

# set strict error handling
set -euo pipefail # exit on errors, undefined variables, and failed pipes

read -p "This script will create a directory structure for the course. Are you sure you want to continue? (y/N): " confirm

if [[ ! "$confirm" =~ ^[Yy]$ ]]; then
    echo "Operation canceled. No changes were made."
    exit 1
fi

echo "Initializing directory creation process..."

target_dir="/Users/ryanbaker/softsat"

# ensure the target directory exists
if [ ! -d "$target_dir" ]; then
    echo "Error: The target directory '$target_dir' does not exist. Exiting..."
    exit 1
fi

# save the current wd
original_dir=$(pwd)
cd "$target_dir"

echo "Creating the weekly directories and necessary files..."

for i in $(seq 1 9); do
    week_dir="week$i"
    mkdir -p "$week_dir/lecture/code" "$week_dir/lecture/build" "$week_dir/homework/code" "$week_dir/homework/build" "$week_dir/quiz/code" "$week_dir/quiz/build"
    touch "$week_dir/lecture/Lecture$i.tex" "$week_dir/homework/Homework$i.tex" "$week_dir/quiz/Quiz$i.tex"
done

mkdir -p tex build

cd "$original_dir"

echo "Directory structure created successfully! All files and folders are set up."
