/* Pattern Given:

    1 
   212
  32123
 4321234
543212345 

*/
#include <stdio.h>

int main()
{
    int n=5,c,r;
    
    for(r=1;r<=n;r++)
    {
        
    for(int space=1;space<=n-r;space++)
    printf(" ");
    
    for(c=r;c>=1;c--)
    {
        printf("%d",c);
    }
    for(c=2;c<=r;c++)
    {
        printf("%d",c);
    }
    printf("\n");
    }
}
