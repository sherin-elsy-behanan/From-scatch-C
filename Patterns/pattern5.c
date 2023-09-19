/* Pattern Given:

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
#include <stdio.h>

int main()
{
    int n=5,c,r;
    printf("Way 1\n");
    for(r=1;r<=n;r++)
    {
    for(c=1;c<=r;c++)
    {
        printf("* ");
    }
    printf("\n");
    }
    for(int r=1;r<=n-1;r++)
    {
    for(int c=1;c<=n-r;c++)
    {
        printf("* ");
    }
    printf("\n");
    }
    
    printf("\nWay 2\n");
    for(r=1;r<=2*n-1;r++) //no of rows
    {   
        int c1= (r<=n)? r: 2*n-r; //if row is less than or equal to colomn(given n) no of coloums is row itselft
        for(c=1;c<=c1;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

