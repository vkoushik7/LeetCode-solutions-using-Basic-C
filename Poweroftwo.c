//Leet Code
//Power of Two
#include <stdio.h>
int isPowerOfTwo(int n)
{
    if (n==0 || n<0)
        return 0;
    else if (n==1)
        return 1;
    while (n>1)
    {
        if (n%2!=0)
        {
            return 0;
        }
        n=n/2;
    }
    return 1;
}
int main()
{
	int n;
	printf("Enter no. ");
	scanf("%d",&n);
	printf("%d",isPowerOfTwo(n));
}