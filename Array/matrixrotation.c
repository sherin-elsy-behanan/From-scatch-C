#include <stdio.h>
#include <stdlib.h>
void rotation_c(int r,int c,int **a)
{
    int i,j,temp,k;
    //taking transpose
    for(i=0;i<r;i++)
    {
        for(j=i+1;j<c;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //reversing columns
    for(i=0;i<r;i++)
    {
        for(j=0,k=c-1;j<k;j++,k--)
        {
            temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
        }
    }
    printf("Resulted Matrix: \n");
    for(i=0;i<r;i++)
    {
        printf("[");
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    
}
void rotation_a(int r,int c,int **a)
{
    int i,j,temp,k;
    //taking transpose
    for(i=0;i<r;i++)
    {
        for(j=i+1;j<c;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //reversing rows
    for(i=0,k=r-1;i<k;i++,k--)
    {
        for(j=0;j<c;j++)
        {
            temp=a[i][j];
            a[i][j]=a[k][j];
            a[k][j]=temp;
        }
    }
    printf("Resulted Matrix: \n");
    for(i=0;i<r;i++)
    {
        printf("[");
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    
}

int main()
{
    int c,r,i,j;
    char rot;
    printf("Enter no. of rows");
    scanf("%d",&r);
    printf("Enter no. of columns");
    scanf("%d",&c);
    int **a;
    a = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++) {
        a[i] = (int *)malloc(c * sizeof(int));
    }
    
    printf("Enter a matrix: ");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
            
    
    printf("Enter the rotation: ");
    scanf(" %c",&rot);
    if(rot=='c')
    {
        rotation_c(r,c,a);
    }
    else
    rotation_a(r,c,a);
    
}

