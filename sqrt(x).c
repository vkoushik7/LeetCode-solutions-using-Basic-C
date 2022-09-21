//Leet Code
//sqrt(x)
#include <stdio.h>
int mySqrt(int x)
{
	int n=x,i,j,k,a;
	int low=1,mid;
	int high=50000;
	while (low<=high)
	{
		mid=(low+high)/2;
		if (mid*mid==n)
		{
			return mid;
		}
		if ((mid*mid)<n)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return high;
}
int main()
{
	int x;
	printf("Enter no. ");
	scanf("%d",&x);
	printf("%d",mySqrt(x));
}