#!/bin/bash
# validate nuid using =~. 
#the nuid is supposed to be 9-digit number starting with double 0
if [[ ! $1 =~ ^00[0-9]{7}$ ]]; then
    echo "Invalid nuid" 
    exit 1
fi
# validate email using =~. 
# The email domain should be northeastern, and the account is supposed to be name separated by . 
# and can followed by one digit number
if [[ ! $2 =~ ^[a-zA-Z]+(\.[a-zA-Z]+[0-9]*+)+@northeastern\.edu$ ]]; then
	echo "Invalid email address"
    exit 1
fi
nuid=$((10#$1))
sc1=$(( $nuid % 19))
echo -e "Thanks, your email is: $2, \nand your 9 programs to work with are:"
for (( c=1; c<10; c++ ))
do
        increment=$(( $c))
        code=$(($(($sc1 + $increment)) % 19))
        code=$(printf %02d $code)
        echo "$c. codeN11$code.c"
done

sc2=$(( $nuid % 3))
echo -e "Your Part 4 Program is:"
if [[ $sc2 -eq 0 ]]
then
echo "Buffer Overflow"
fi
if [[ $sc2 -eq 1 ]]
then
echo "Undefined Behavior"
fi
if [[ $sc2 -eq 2 ]]
then
echo "Memory Leak"
fi
