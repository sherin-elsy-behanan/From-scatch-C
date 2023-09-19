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
    
    for(r=1;r<2*n;r++)
    {
    int c1= r<=n?r:2*n-r;
    for(int space=1;space<=n-c1;space++)
    {
        printf(" ");
    }
    for(c=1;c<=c1;c++)
    {
        printf("* ");
    }
    printf("\n");
    }
   
}
