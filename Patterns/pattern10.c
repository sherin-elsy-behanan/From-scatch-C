/*

      1 
    2 3 2 
  3 4 5 4 3 
4 5 6 7 6 5 4 

*/
#include <stdio.h>

int main()

{   
    int n=4,i,j,k;
    for(i=1;i<=n;i++)
    {   
        for(int space=1;space<=n-i;space++)
        printf("  ");
        for(j=i;j<2*n-2*(n-i);j++)
        {
            printf("%d ",j);
        }
        for(k=j-2;k>=i;k--)
        {
            printf("%d ",k);
        }
        
        printf("\n");
    }
}

