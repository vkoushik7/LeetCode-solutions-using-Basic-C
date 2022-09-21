//Leet Code
//Distance value between 2 arrays
#include <stdio.h>
int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d)
{
    int i,j,k=0,flag=0;
    for (i=0;i<arr1Size;i++)
    {
    	k++;
        for (j=0;j<arr2Size;j++)
        {
            if (abs(arr1[i]-arr2[j])<=d)
            {
            	k--;
                break;
            }
        }
    }
    return k;
}
int main()
{
	int arr1[100],arr2[100],n1,n2;
	printf("Enter size of array1: ");
	scanf("%d",&n1);
	printf("Enter data for array1: ");
	for (int c=0;c<n1;c++)
	{
		scanf("%d",&arr1[c]);
	}
	printf("Enter size of array2: ");
	scanf("%d",&n2);
	printf("Enter data for array2: ");
	for (int c=0;c<n2;c++)
	{
		scanf("%d",&arr2[c]);
	}
	printf("Enter d value: ");
	int d;
	scanf("%d",&d);
	int a=findTheDistanceValue(arr1,n1, arr2, n2,d);
	printf("%d",a);
}