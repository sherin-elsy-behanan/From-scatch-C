#include <stdio.h>
int main()
{
    int num,temp,count=0,bits;
    printf("Enter a number :");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {

        if(temp%2==1)
        {
            count=count+1;
        }

        temp=temp/2;
    }
    bits=count+temp;
    printf("Set bits count = %d",bits);
    return 0;
}
