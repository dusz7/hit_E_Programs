awk '{for(i=1;i<=NF;i++)if(NR==1)a[i]=$i;else a[i]=(a[i]" "$i);}END{for(i in a)print a[i];}' file.txt
