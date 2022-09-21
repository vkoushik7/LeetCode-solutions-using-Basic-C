#include <stdio.h>
int isPalindrome(int x)
{
	int flag=0,p,arr[100],c=0;
	if (x==0)
	{
		flag=1;
	}
	while (x>0)
	{
		arr[c]=x%10;
		c=c+1;
		x=x/10;
	}
	for (p=0;p<c;p=p+1)
	{
		if (arr[p]!=arr[c-p-1])
		{
			flag=0;
			break;
		}
		else
		{
			flag=1;
		}
	}
	if (flag)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	printf("Enter the number: ");
	int n;
	scanf("%d",&n);
	printf("%d",isPalindrome(n));
}