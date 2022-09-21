//Leet Code
//searchInsert
#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target)
{
	int low=0;
	int mid;
	int high=numsSize-1;
	if (target>nums[high])
	{
		return high+1;
	}
    else if (target<nums[0])
    {
        return 0;
    }
	while (low<=high)
	{
		mid=(low+high)/2;
		if (nums[mid]==target)
		{
			return mid;
			break;
		}
		else if (nums[mid]>target)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return low;
}
int main()
{
	int arr[100],s,t,c;
	printf("Enter size: ");
	scanf("%d",&s);
	printf("Enter elements: ");
	for (c=0;c<s;c++)
	{
		scanf("%d",&arr[c]);
	}
	printf("Enter searching element: ");
    scanf("%d",&t);
    int k=searchInsert(arr,s,t);
    printf("%d",k);
}