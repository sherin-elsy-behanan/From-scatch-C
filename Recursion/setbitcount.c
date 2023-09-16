#include <stdio.h>
int count=0;
int setbits(int n)
{   

   if(n<1)
   return n;
   return (n&1)+setbits(n>>1);
}
int main()
{
    int num;
   printf("Enter a number");
   scanf("%d",&num);
   printf("Count = %d",setbits(num));
}
