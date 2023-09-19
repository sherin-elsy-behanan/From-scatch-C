/*Given Pattern

4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 

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
    int n=4,r,c;
    for(r=1;r<2*n;r++)
    {
        for(c=1;c<2*n;c++)
        {
            int colval=n-(small(small(c,r),small((2*n-c),(2*n-r))));
            printf("%d ",colval+1);
        }
        printf("\n");
    }
    
}

