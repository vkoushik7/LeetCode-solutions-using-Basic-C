//Leet Code
//Plus One
#include <stdio.h>
#include <stdlib.h>
int *plusOne(int* digits, int digitsSize, int *returnSize)
{
    int c;
	int k=0;
	int i=0;
    *returnSize=digitsSize;
    int *ret_arr;
    if (digitsSize==1)
    {
    	if (digits[0]==9)
    	{
    		*returnSize=2;	
            ret_arr[0]=1;
            ret_arr[1]=0;
		}
        else
        {
        	ret_arr[0]=digits[0];
            ret_arr[0]=ret_arr[0]+1;
        }
	}
    if (digitsSize>1 && digits[digitsSize-1]==9)
    {
    	c=digitsSize-1;
        for (i=c;i>=0;i=i-1)
        {
        	if (digits[i]!=9)
        	{
        		break;
			}
        	ret_arr[i]=0;
        }
        if (c==-1)
        {
            *returnSize=*returnSize+1; 
			ret_arr[0]=1;
        }
        else
        {
			ret_arr[i]=ret_arr[i]+1;
		}
    }
    else if (digitsSize>1 && digits[digitsSize-1]!=9)
    {
    	for (i=0;i<digitsSize;i++)
    	{
    		ret_arr[i]=digits[i];
		}
		ret_arr[digitsSize-1]=ret_arr[digitsSize-1]+1;
	}
    return ret_arr;
}
int main()
{
	int arr[100];
	int k,s,c;
	printf("Enter size of array: ");
	scanf("%d",&s);
	printf("Enter elements for array: ");
	for (c=0;c<s;c++)
	{
		scanf("%d",&arr[c]);
	}
	int *ans=plusOne(arr,s,&k);
	for (c=0;c<k;c++)
	{
		printf("%d",*(ans+c));
	}
}