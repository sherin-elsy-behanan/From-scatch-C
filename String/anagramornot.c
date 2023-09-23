#include <stdio.h>
#include <string.h>
int anagramcheck(char *str1,char *str2,int len)
{    
    //sort string1
    int i,j;
    char temp;
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
        if(str1[i]>str1[j])
        {
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        }
        }
    }
   
    
    //sort string2
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
        if(str2[i]>str2[j])
        {
        temp=str2[i];
        str2[i]=str2[j];
        str2[j]=temp;
        }
        }
    }
    i=0,j=0;
    int valid=1;
    while(len-1)
    {
        if(str1[i]!=str2[i])
        valid=0;
        i++;
        
        len--;
        
    }
    return valid;
}
int main()
{
    char str1[100],str2[100];
    printf("Enter the string 1");
    fgets(str1,100,stdin);
    printf("Enter the string 2");
    fgets(str2,100,stdin);
    int len=strlen(str1);
    int valid=anagramcheck(str1,str2,len);
    if(valid==1)
    printf("Anagaram");
    else
    printf("Not anagaram");
    printf("New string1: %s\n", str1);
    printf("New String2: %s\n",str2);
}

