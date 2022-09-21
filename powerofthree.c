//Leet code
//Power of three
#include <stdio.h>
int isPowerOfThree(int n)
{
    double c;
    c=n;
    if (c<0)
    {
    	return 0;
	}
    if (c==1)
    {
    	return 1;
	}	
	while (c>=3)
	{
		if (c==3)
		{
			return 1;
		}
		c=c/3;
	}
	return 0;
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int a=isPowerOfThree(n);
	printf("%d",a);
}