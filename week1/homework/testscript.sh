#!/bin/bash

infile="testinput.txt"
expected="expected.txt"
outfile="output.txt"
srcfile="calculator.cpp"
executable="exe"

clang++ "$srcfile" -o "$executable"

while read -r a && read -r b; do
    echo "$a $b" | ./exe 
done < "$infile" > "$outfile"

diff "$expected" "$outfile"
