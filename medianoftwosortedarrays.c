//LeetCode
//Median of two sorted arrays
#include <stdio.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int i=0,j=0,a=0,c=0,s=0;
    double k=0;
    int arr[100];
    for (c=0;c<(nums1Size+nums2Size);c++)
    {
        if (nums1[i]==nums2[j])
        {
            i++;
            j++;
            arr[c]=nums1[i];
        }
        else if (nums1[i]>nums2[j])
        {
        	j++;
        	arr[c]=nums2[j];
		}
		else 
		{
			i++;
			arr[c]=nums1[i];
		}
	}
	printf("%d",c);
	return k;
}
int main()
{
	int arr1[100],arr2[100],m,n,c;
	printf("Enter m&n: ");
	scanf("%d%d",&m,&n);
	printf("Enter data for array 1: ");
	for (c=0;c<m;c++)
	{
		scanf("%d",&arr1[c]);
	}
	printf("Enter data for array 2: ");
	for (c=0;c<n;c++)
	{
		scanf("%d",&arr2[c]);
	}
	printf("%lf",findMedianSortedArrays(arr1,m,arr2,n));
}