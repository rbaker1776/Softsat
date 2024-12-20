#!/bin/bash

outfile="testinput.txt"
count=2000

truncate -s 0 "$outfile"

for ((i=0; i<count; i++)); do
    echo $((RANDOM % 10000 - 5000)) >> "$outfile"
done
