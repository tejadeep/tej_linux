#!/bin/bash 
if [ $# -ne 1 ] 
then 
    echo "Please provide the correct input in the below format."
    echo "Usage: ./filename number" 
fi 

n=$1
rev=0 
temp=0

while [ $n -gt 0 ] 
    do 
    temp=`expr $n % 10` 
    rev=`expr $rev \* 10  + $temp` 
    n=`expr $n / 10` 
done 
echo  "Reverse:$rev"
