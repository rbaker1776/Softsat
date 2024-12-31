#!/bin/bash

wd=$(pwd)
cd /Users/ryanbaker/softsat/

for i in $(seq 1 2); do
    cd week$i/lecture/
    pdflatex -output-directory=build -interaction=nonstopmode Lecture$i.tex
    cd ../../
done

pdflatex -output-directory=build -interaction=nonstopmode Outline.tex

cd $wd
