#!/bin/bash

SECONDS=0
value=0

while [ 1 ]
    do
    value=$(( $value + 1))
    duration=$SECONDS
    mins=$(($duration/60))
    secs=$(($duration%60))
    echo " $mins minutes and $secs seconds elapsed."
    echo " the program has been running $value times so far"
    ./demo
done
