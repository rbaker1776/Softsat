#!/bin/bash

# set strict error handling
set -euo pipefail # exit on errors, undefined variables, and failed pipes

echo "Building LaTeX files..."

target_dir="/Users/ryanbaker/softsat"
tex_dir="$target_dir/tex"

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
    if [ -d "$week_dir/lecture" ]; then
        cd "$week_dir/lecture"
        pdflatex -output-directory="build" -interaction=nonstopmode "Lecture$i.tex"
        cd ../../
    fi
    if [ -d "$week_dir/quiz" ]; then
        cd "$week_dir/quiz"
        pdflatex -output-directory="build" -interaction=nonstopmode "Quiz$i.tex"
        cd ../../
    fi
    if [ -d "$week_dir/homework" ]; then
        cd "$week_dir/homework"
        pdflatex -output-directory="build" -interaction=nonstopmode "Homework$i.tex"
        cd ../../
    fi
done

pdflatex -output-directory="build" -interaction=nonstopmode "Outline.tex"

cd $original_dir

echo "Built LaTeX files successfully!"
