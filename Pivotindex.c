//Leet Code
//Find pivot index
#include <stdio.h>
int pivotIndex(int* nums, int numsSize)
{
    int i=0,sl=0,sr=0;
    for (i=0;i<numsSize;i++)
    {
        sr=sr+nums[i];
    }
    for (i=0;i<numsSize;i++)
    {
        sl=sl+nums[i];
        sr=sr-nums[i];
        if (sl-nums[i]-sr==0)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	int arr[100];
	printf("Enter data for array: ");
	for (int c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	int a=pivotIndex(arr,n);
	printf("%d",a);
}