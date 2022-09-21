//Leet Code
//Merge Sorted Array
#include <stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int i=0,j=0,c=0;
    int k=nums1Size-m;
    long int res[200];
    if (nums1Size==1 || nums2Size==1)
    {
		
	}
    for (c=0;c<nums1Size;c++)
    {
    	if (nums1[i]==0)
    	{
    		res[c]=nums2[j];
    		i++;
    		j++;
		}
        else if (nums1[i]<=nums2[j])
        {
            res[c]=nums1[i];
            i++;
        }
        else 
        {
            res[c]=nums2[j];
            j++;
        }
    }
    for (c=0;c<nums1Size;c++)
    {
        nums1[c]=res[c];
    }
}
int main()
{
	int s1,s2,arr1[100],arr2[100],m,n,c;
	printf("Enter size of 1st array: ");
	scanf("%d",&s1);
	for (c=0;c<s1;c++)
	{
		scanf("%d",&arr1[c]);
	}
	printf("Enter size of 2st array: ");
	scanf("%d",&s2);
	for (int c=0;c<s2;c++)
	{
		scanf("%d",&arr2[c]);
	}
	printf("Enter m and n value: ");
	scanf("%d\n%d",&m,&n);
	merge(arr1,s1,m,arr2,s2,n);
	for (c=0;c<s1;c++)
	{
		printf("%d, ",arr1[c]);
	}
}