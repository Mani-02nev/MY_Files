
read -p"Enter A First Number:" num1
read -p"Enter A Second Number:" num2
read -p"Enter A Third number:" num3
if [ "$num1" -gt "$num2" ]; then
    echo "$num1 is a largest number"
elif [ "$num2" -gt "$num3"]; then
    echo "$num2 is a largest number"
else
    echo "$num3 is a largest number"
fi  
