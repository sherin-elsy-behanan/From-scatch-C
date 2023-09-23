#include <stdio.h>
int prime(int x)
{
    int res=0,i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            res++;
        }
    }
    return res;
}

int main()
{
   int num,i,y;
   printf("Enter the number :\n");
   scanf("%d",&num);
   y=prime(num);
   if(y==0)
   printf("%d ",i);
   for(i=2;i<num/2;i++)
   {
       if(num%i==0)
       {
           y=prime(i);
           if(y==0)
           {
               printf("%d ",i);
           }
       }
   }
}

