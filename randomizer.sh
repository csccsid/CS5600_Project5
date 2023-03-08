#!/bin/bash
nuid=$((10#$1))
sc1=$(( $nuid % 19))
echo -e "Thanks, your email is: $2, \nand your 9 programs to work with are:"
for (( c=1; c<10; c++ ))
do
        increment=$(( $c))
        code=$(($(($sc1 + $increment)) % 19))
        echo "$c. codeN11$code.c"
done