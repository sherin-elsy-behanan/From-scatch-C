//program to print the no of shops to visit, where l=binary bit possible,i=starting shop number
#include <stdio.h>
#include <math.h>
int main()
{
    int ii,l,num=0,i;
    printf("Enter a number i and l: ");
    scanf("%d%d",&ii,&l);
    //convert binary bits to number
    for(i=l-1;i>-1;i--)
    {
        num=num+pow(2,i);
    }
    printf("Rest= %d",(num+1)-ii);
    
    return 0;
}
