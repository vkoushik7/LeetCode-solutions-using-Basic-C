//Leet Code
//Special array with x elements greater than or equal X
#include <stdio.h>
int specialArray(int* nums, int numsSize)
{
	int l=1,m,h=100;
	int c=0,a=0,x=0,i=0;
	while (l<=h)
	{
		m=(l+h)/2;
		c=0;
		for (i=0;i<numsSize;i++)
		{
			if (nums[i]!=0)
			{
				if (nums[i]>=m)
				{
					c++;
				}
			}
		}
		if (m==c)
		{
			return m;
		}
		else if (m<c)
		{
			l=m+1;
		}
		else
		{
			h=m-1;
		}
	}
	return -1;
}
int main()
{
	int n,arr[100],c;
	printf("Enter size: ");
	scanf("%d",&n);
	printf("Enter data: ");
	for (c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	printf("%d",specialArray(arr, n));
}