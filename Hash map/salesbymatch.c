/*
There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.
*/

#include <stdio.h>
int findpairs(int *array, int size)
{
   int i,pairs=0;
   int count[100]={0}; //let it be the maximum of colours
   for(i=0;i<size;i++)
   {
       count[array[i]]++;
   }
   for(i=0;i<100;i++)
   {
       pairs=pairs+count[i]/2;
   }
   return pairs;
}

int main()
{
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements ");
    for(i=0;i<size;i++)
    scanf("%d",&array[i]);
    int pairs=findpairs(array,size);
    printf("pair of socks= %d",pairs);

    return 0;
}

/* another method after sorting array then comparison
int sockMerchant(int n, int ar_count, int* ar) {
    int i,count=0,temp;
    
    for (i = 0; i < ar_count - 1; i++) {
        for (int j = 0; j < ar_count - i - 1; j++) {
            if (ar[j] > ar[j + 1]) {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    for(i=0;i<ar_count-1;i++)
    {
        
        if(ar[i]==ar[i+1])
        {
            count++;
            i++;
        }
        
              
    }
    return count;
}


*/
