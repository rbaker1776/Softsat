#!/bin/bash

wd=$(pwd)
cd /Users/ryanbaker/softsat/

for i in $(seq 1 2); do
    cd week$i/lecture/
    cp ./build/Lecture$i.pdf ../../pdfs
    cd ../../
done

cp ./build/Outline.pdf ./pdfs

cd $wd
