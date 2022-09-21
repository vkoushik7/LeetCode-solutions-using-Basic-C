//Leet Code
//Power(x,n)
#include <stdio.h>
double myPow(double x, int n)
{
	double ans=1;
	int c;
	unsigned int e = (n<0) ? -1*n : n;
	double b = (n<0) ? 1/x : x;
	while (e)
	{
		if (e%2==0)
		{
			b=b*b;
			e=e/2;
		}
		else
		{
			ans=ans*b;
			e=e-1;
		}
	}
	return ans;
}
int main()
{
	printf("Enter number: ");
	double x;
	scanf("%lf",&x);
	printf("Enter power: ");
	int n;
	scanf("%d",&n);
	printf("%lf",myPow(x,n));
}
