#!/bin/bash

infile="testinput.txt"
expected="expected.txt"
outfile="output.txt"
executable="exe"
srcfile=$1

clang++ "$srcfile" -o "$executable"

while read -r a && read -r b; do
    echo "$a $b" | ./"$executable"
done < "$infile" > "$outfile"

diff "$expected" "$outfile"
rm "$outfile"
