for i in 'cat 3.txt'
do
    j = 'expr length $i'
    if [[ ( "$j" -eq 5 || "$j" -eq 7 ) ]]
    then
        v = 'echo $i | grep dd'
        if [ "$v" -ne "" ]
        then
            echo $v
            sed -i "s/$v/lalat/g" 3.txt
        fi
    fi
done
