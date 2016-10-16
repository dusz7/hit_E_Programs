signal1="^\([0-9]{3}\) [0-9]{3}-[0-9]{4}$"
signal2="^[0-9]{3}-[0-9]{3}-[0-9]{4}$"
while read line
do
if [[ "$line" =~ $signal1 || "$line" =~ $signal2 ]];
then
     echo $line
fi
     let num=num+1
done<file.txt
