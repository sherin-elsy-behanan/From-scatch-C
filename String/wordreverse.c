#include <stdio.h>
#include <string.h>
char str[100];
void rev(int s,int e)
{   
    while(s<e)
    {
        char temp;
        temp=str[s];
        str[s]=str[e];
        str[e]=temp;
        s++;
        e--;
    }
    
    
}

int main()
{
    
    int start=0,end=0,i;
    printf("Enter the string for analyse: ");
    scanf("%[^\n]s",str);
    int len=strlen(str);
    for(i=0;i<=len;i++)
    {
        
        if(str[i]==' ' || str[i]=='\0')
        {
            rev(start,i-1);
            start=i+1;
            
        }
        
    }
    printf("%s",str);
}

