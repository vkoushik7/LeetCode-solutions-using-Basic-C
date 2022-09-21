//Leet Code
//kth missing positive number
#include <stdio.h>
int findKthPositive(int* arr, int arrSize, int k)
{
    int i=0,j=1,c=0,res[100],p=0,l=arrSize+k;
    int a=k-1;
    for (j=1;j<100;j++)
    {
    	if (arr[i]==j)
    	{
    		i++;
		}
		else
		{
			res[c]=j;
			c++;
		}
	}
	return res[a];
}
int main()
{
	int arr[100],k,n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter data for array: ");
	for (int c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	printf("Enter k value: ");
	scanf("%d",&k);
	printf("\n\n%d",findKthPositive(arr, n,k));
}