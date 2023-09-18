#include <stdio.h>
int removeElement(int* nums, int numsSize, int val)
{
    int p,i,k=0;
    p=numsSize-1;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==val)
        k++;
    }
    for(i=0;i<numsSize-k;i++)
    {
        if(nums[i]==val)
        {
            while(nums[p]==val)
            {
                p--;
            }
            
            int temp;
            temp=nums[i];
            nums[i]=nums[p];
            nums[p]=temp;
           
        }
    }
    return numsSize-k;
}
int main()
{
    int m,val,i;
    printf("Enter the size of array1:");
    scanf("%d",&m);

   
    int nums[m];
    printf("Enter the elements int the array1");
    for(i=0;i<m;i++)
    scanf("%d",&nums[i]);
    printf("Enter the value");
    scanf("%d",&val);
    int n;
    n=removeElement(nums,m,val);
    printf("Output");
    for(i=0;i<m;i++)
    printf("%d",nums[i]);
}
