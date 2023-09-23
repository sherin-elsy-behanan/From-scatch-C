#include <stdio.h>
#include <string.h>

int main()
{   
    char name[100],num[100],id[10];
    int i;
    printf("Enter the employee name ");
    scanf("%[^\n]s",name);
    printf("Enter the employee phone number ");
    scanf("%s",num);
        for(i=0;i<4;i++)
        {
            id[i]=name[i];
        }
    int j=6;
        for(i=4;i<8;i++)
        {
            id[i]=num[j++];
        }
    printf("\n%s",id);
}

