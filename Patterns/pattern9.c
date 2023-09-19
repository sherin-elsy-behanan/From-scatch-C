/*Given Pattern

1 2 3 4 5 6 7 8 9 
2               2 
3               3 
4               4 
5               5 
6               6 
7               7 
8               8 
1 2 3 4 5 6 7 8 9

*/
#include <stdio.h>
int small(int a, int b)
{
    if(a<b)
    return a;
    else
    return b;
}

int main()
{
    int n=5,r,c;
    for(r=1;r<2*n;r++)
    {
        for(c=1;c<2*n;c++)
        {
            if(r==1 || r==2*n-1 )
            printf("%d ",c);
            else
            {
            if(c==1|| c==2*n-1)
            printf("%d ",r);
            else
            printf("  ");
            }
        }
        printf("\n");
    }
    
}

