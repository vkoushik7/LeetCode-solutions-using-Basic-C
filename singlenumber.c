//Leet code
//Single number
#include <stdio.h>
int singleNumber(int* nums, int numsSize)
{
	int i=0,j=0,k=0,a=numsSize,flag=0;
	for (i=0;i<a;i=i+1)
	{
        k=nums[i];
		flag=0;
		for (j=0;j<a;j=j+1)
		{
			if (i!=j)
			{
				if (nums[i]==nums[j])
				{
					flag=1;
					break;
				}
			}
		}
		if (flag==0)
		{
			break;
		}
	}
    return k;
}
int main()
{
	int arr[100],n,a;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter data for array: ");
	for (int c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	printf("%d",singleNumber(arr, n));
}