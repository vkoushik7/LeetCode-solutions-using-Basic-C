#include <stdio.h>
#include <stdlib.h>
int *twoSum(int *numbers, int numbersSize, int target, int *returnSize)
{
	int i,j;
	int *ret_arr=(int*)malloc(2*sizeof(int));
	if (ret_arr==NULL || numbers == NULL || numbersSize<2)
	{
		*returnSize=0;
		return NULL;
	}
	for (i=1;i<=numbersSize-1;i++)
	{
		for (j=i+1;j<=numbersSize;j++)
		{
			if (numbers[i]+numbers[j]==target)
			{
				*returnSize=2;
				ret_arr[0]=i+1;
				ret_arr[1]=j+1;
				return ret_arr;
			}
		}
	}
	*returnSize=0;
	free(ret_arr);
	return NULL;
}
int main()
{
	int n,c,arr[100],target,k;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter data for array: ");
	for (c=0;c<n;c++)
	{
		scanf("%d",&arr);	
	}
	printf("Enter target: ");
	scanf("%d",&target);
	int *size,*res;
	res=twoSum(arr,n,target,size);
	printf("%d  ",*res);
	printf("%d",*(res+1));
	free(res);
}