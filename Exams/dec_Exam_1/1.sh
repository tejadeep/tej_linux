echo "enter a number"
read N
a=0 
b=1   
for (( i=0; i<N; i++ )) 
do
    echo -n "$a "
    c=$((a + b)) 
    a=$b 
    b=$c 
done
