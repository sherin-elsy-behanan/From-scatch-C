#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s",s);
    int len=strlen(s);
    int s1=s[len-1]-'0';
    int s2=s[len-2]-'0';
    if(s1+s2==8)
    printf("Lucky winner");
    else
    printf("Not a lucky winner");

    return 0;
}
