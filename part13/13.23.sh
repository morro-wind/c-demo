#!/bin/bash
for (( i = 1; i < 10; i++ ))
do
    for (( j = 1; j < 10; j++))
    do
        #if [ $j -le $i ];then
        #    echo -e "$j*$i=$[ $j * $i ] \c"
        #fi
        [[ $j -le $i ]] && echo -e "$j*$i=$[ $j * $i ] \c"
    done
    echo ""
done
