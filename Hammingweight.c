//Leet Code
//Hamming Weight
#include <stdio.h>
int hammingWeight(long int n) 
{
    int i,j,k=0;
    while (n<=0)
    {
        if (n%10==1)
        {
            k++;
        }
        n=n/10;
    }
    return k;
}
int main()
{
	long int n;
	printf("Enter bit: ");
	scanf("%d",&n);
	printf("%d",hammingWeight(n));
	
}