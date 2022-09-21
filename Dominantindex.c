//Leet Code
//dominant index
#include <stdio.h>
int dominantIndex(int* nums, int numsSize)
{
    int i=0;
    int k=0;
    int max=nums[0];
    for (i=0;i<numsSize;i=i+1)
    {
        if (nums[i]>max)
        {
            max=nums[i];
            k=i;
        }
    }
    for (i=0;i<numsSize;i=i+1)
    {
        if (i!=k)
        {
        	if (max<(2*nums[i]))
        	{
        		return -1;
			}
		}
    }
    return k;
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
	int a=dominantIndex(arr,n);
	printf("%d",a);
}