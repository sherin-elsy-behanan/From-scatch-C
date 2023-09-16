#include <stdio.h>
int setbits(int n)
{   
    int count=0;
    while(n)
    {
        count=count+ (n&1);
        n=n>>1;
    }
    printf("set bit count: %d",count);
}
int main()
{
    int num;
   printf("Enter a number");
   scanf("%d",&num);
   setbits(num);
}
