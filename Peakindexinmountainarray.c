//Leet Code
//Peak index in a mountain array
#include <stdio.h>
int peakIndexInMountainArray(int* arr, int arrSize)
{
    int a,c,low=0,mid,high=arrSize-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]>arr[mid+1])
        {
            if (arr[mid-1]<arr[mid])
            {
            	return mid;
			}
			else
			{
				high=mid-1;
			}
        }
        else if (arr[mid]<arr[mid+1])
        {
            low=mid+1;
        }
        else
        {
        	high=mid-1;
		}
    }
    return low;
}
int main()
{
	int n,arr[100];
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter data for array: ");
	for (int c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	printf("%d",peakIndexInMountainArray(arr,n));
}