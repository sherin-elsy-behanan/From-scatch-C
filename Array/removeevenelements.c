#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a;
    int i,j,N,new=0;
    printf("Enter the number of elements");
    scanf("%d",&N);
    a= (int*)malloc(N*sizeof(int));
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<N;i++)
    {
        if(a[i]%2!=0)
        {   
            a[new++]=a[i];
            
        }
        
    }
    printf("Rest =%d",new);
}

