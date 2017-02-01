awk '{  
for(i=1;i<=NF;i++)   
    {  
        if(1==NR){  
            s[i] = $i;  
        }  
        else{  
            s[i] = s[i]" "$i;    
        }  
    }  
    } END {  
        for(i=1;s[i]!="";i++)    
        print s[i];    
    }' file.txt  