//Leet Code
//Valid Perfect Square
#include <stdio.h>
int isPerfectSquare(int num)
{
    int x=num,i=0,j=0,k=0,c=0,a=0;
	while (i*i<x)
	{
		i=i+1;
	}
	return i*i==x;
}
int main()
{
	int x;
	printf("Enter number: ");
	scanf("%d",&x);
	printf("%d",isPerfectSquare(x));
}