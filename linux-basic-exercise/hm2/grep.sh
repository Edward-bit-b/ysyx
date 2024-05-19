#!/bin/bash

echo "time now:$(date)"
for file in "$@"; do
	grep foobar "$file" > /dev/null 2>/dev/null
	if [[ $? -ne 0 ]]; then
		echo "not foud in $file"
		echo "# foobar" > "$file"
	fi
done
