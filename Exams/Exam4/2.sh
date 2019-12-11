read a
read b
read c
if [ $a -eq $b ] && [ $b -eq $c ]
then
echo "EQUILATERAL"
elif [ $b -eq $a ]
then
echo "ISOSCELES"
elif [ $c -eq $a ]
then
echo "ISOSCELES"
elif [ $b -eq $c ]
then
echo "ISOSCELES"
else
echo "SCALENE"
fi
