//Leet code 
//Stone game
//Alternate Solution is return true
#include <stdio.h>
int stoneGame(int* piles, int pilesSize)
{
	int s=pilesSize-1;
	int k=pilesSize-1;
	int al=0,bo=0,c=0;
	while (c<pilesSize && k!=0)
	{
		if(c%2==0)
		{
			if (piles[c]+piles[c+2]>piles[s-c]+piles[s-c-1])
			{
				al=al+piles[c];
			}
			else
			{
				al=al+piles[s-c];
			}
		}
		else
		{
			if (piles[c]+piles[c+2]>piles[s-c]+piles[s-c-1])
			{
				bo=bo+piles[c];
			}
			else
			{
				bo=bo+piles[s-c];
			}
		}
		k--;
        c++;
	}
	if (al>bo)
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
	int arr[100],n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter data for array: ");
	for (int c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	int a=stoneGame(arr,n);
	printf("%d",a);
}