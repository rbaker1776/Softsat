#!/bin/bash

SRC=$1
EXECUTABLE="add"

clang++ "$SRC" -o "$EXECUTABLE" 2> errors.txt

if [ $? -ne 0 ]; then
    echo "Compilation failed."
    cat errors.txt
fi

for i in {1..5}; do
    a=$((RANDOM % 1000000 - 500000))
    b=$((RANDOM % 1000000 - 500000))
    OUTPUT=$(./$EXECUTABLE $a $b)
    EXPECTED="$((a + b))"
    if [[ "$OUTPUT" != "$EXPECTED" ]] then
        echo "Test with input ($a, $b) failed. Expected: '$EXPECTED', Received: '$OUTPUT'"
    fi
done
