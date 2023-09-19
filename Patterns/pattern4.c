/* Pattern Given:
1 
1 2 
1 2 3
1 2 3 4
*/
#include <stdio.h>

int main()
{
    int n=4;
    for(int r=1;r<=n;r++)
    {
    for(int c=1;c<=r;c++)
    {
        printf("%d\t",c);
    }
    printf("\n");
    }
}
