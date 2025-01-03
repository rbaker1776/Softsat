#!/bin/bash

# set strict error handling
set -euo pipefail # exit on errors, undefined variables, and failed pipes

read -p "This script will remove stray files. Are you sure you want to continue? (y/N): " confirm

if [[ ! "$confirm" =~ ^[Yy]$ ]]; then
    echo "Operation canceled. No changes were made."
    exit 1
fi

echo "Removing stray files..."

target_dir="/Users/ryanbaker/softsat"

# ensure the target directory exists
if [ ! -d "$target_dir" ]; then
    echo "Error: The target directory '$target_dir' does not exist. Exiting..."
    exit 1
fi

# save the current wd
original_dir=$(pwd)
cd "$target_dir"

for i in $(seq 1 9); do
    week_dir="week$i"
    if [ -f "$week_dir/lecture/Lecture$i.pdf" ]; then
        rm "$week_dir/lecture/Lecture$i.pdf"
    fi
    if [ -f "$week_dir/quiz/Quiz$i.pdf" ]; then
        rm "$week_dir/quiz/Quiz$i.pdf"
    fi
    if [ -f "$week_dir/homework/homework$i.pdf" ]; then
        rm "$week_dir/homework/homework$i.pdf"
    fi
done

if [ -f Outline.pdf ]; then
    rm Outline.pdf
fi

cd "$original_dir"

echo "Stray files removed successfully!"
