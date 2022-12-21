#!/bin/bash

# Add AUTHORs or update AUTHORS
wget https://raw.githubusercontent.com/moby/moby/master/hack/generate-authors.sh
chmod +x generate-*
./generate-authors.sh
rm ./generate-authors*sh

# Check betty compliance (just print out, not implement a no error check)

betty *.c

# Compile the program and run the shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
./hsh
rm hsh

