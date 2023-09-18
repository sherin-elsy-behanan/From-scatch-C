#include <stdio.h>
void merge(int* nums1,int m,int* nums2,int n)
{
    int p1=m-1;
    int p2=n-1;
    int p=m+n-1;
    while(p1>-1&&p2>-1)
    {
        if(nums1[p1]>nums2[p2])
        {
            nums1[p]=nums1[p1];
            p1--;
            p--;
        }
        else
        {
            nums1[p]=nums2[p2];
            p2--;
            p--;
        }
        
    }
    while(p2>0)
    {
        nums1[p]=nums1[p2];
        p--;
        p2--;
    }
}
int main()
{
    int m,n,i;
    printf("Enter the size of array1:");
    scanf("%d",&m);
    printf("Enter the size of array2:");
    scanf("%d",&n);
    int nums1[m+n];
    int nums2[n];
    printf("Enter the elements int the array1");
    for(i=0;i<m;i++)
    scanf("%d",&nums1[i]);
    printf("Enter the elements int the array1");
    for(i=0;i<n;i++)
    scanf("%d",&nums2[i]);
    merge(nums1,m,nums2,n);
    printf("Output");
    for(i=0;i<n+m-1;i++)
    printf("%d",nums1[i]);
}
