//Leet Code
//Rotate Array
#include <stdio.h>
void rotate(int* nums, int numsSize, int k)
{
    long int i,c,arr[100000];
    long int l=numsSize-1;
    long int temp;
    if (numsSize<=2)
    {
        if (k%2==0)
        {
            return;
        }
        else
        {
			temp=nums[0];
        	nums[0]=nums[1];
        	nums[1]=temp;
        }
    }
    else if (numsSize<k)
    {
    	for (c=1;c<=k;c=c+1)
    	{
        	temp=nums[l];
        	for (i=l;i>=1;i--)
        	{
            	nums[i]=nums[i-1];
        	}
        	nums[0]=temp;
    	}
	}
    else
    {
            for (i=0;i<k;i++)
            {
    	        arr[i]=nums[l-k+i+1];
	        }
	        for (i=l;i>=k;i--)
            {
                nums[i]=nums[i-k];
            }
            for (i=0;i<k;i++)
            {
    	        nums[i]=arr[i];
	        }
    }
}
int main()
{
	int n,arr[100],k,c;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter data for array: ");
	for (c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	printf("Enter K value: ");
	scanf("%d",&k);
	rotate(arr,n,k);
	for (c=0;c<n;c++)
	{
		printf("%d, ",arr[c]);
	}
}