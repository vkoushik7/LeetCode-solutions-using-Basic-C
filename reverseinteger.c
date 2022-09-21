//Leet Code
//Reverse Integer
#include <stdio.h>
int reverse(int x)
{
    long int n=x,k=0;
    int c=1,i=0,flag=0,p=0;
    flag = (n<0) ? -1 : 1;
    if (flag==-1)
    {
    	n=n*(-1);
	}
    while (n>0)
    {
    	n=n/10;
    	p=p+1;
	}
	for (i=1;i<p;i++)
	{
		c=c*10;
	}
	n=x;
	if (flag==-1)
    {
    	n=n*(-1);
	}
    while (n>0)
    {
        k=k+(n%10)*c;
        c=c/10;
        n=n/10;
    }
    if (flag==-1)
    {
    	k=k*(-1);
	}
	if (k<(-2147483649) || k>2147483648)
	{
		return 0;
	}
    return k;
}
int main()
{
	printf("%d",reverse(-2147483648));
}