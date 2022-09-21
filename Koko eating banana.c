//leet code
//koko eating banana
#include <stdio.h>
int minEatingSpeed(long int* piles, int pilesSize, int h)
{
    long int i,t;
    long int high = piles[0]; 
    for (i = 1; i < pilesSize; i++)
    {
        if (piles[i] > high)
        {
		    high = piles[i];
		}
    }
    long int low=1,mid;
	while (low!=high)
	{
		t=0;
		mid = (low+high)/2;
		for (i=0;i<pilesSize;i++)
		{
			if (piles[i]%mid==0)
			{
				t=t+piles[i]/mid;
			}
			else
			{
				t=t+piles[i]/mid+1;
			}
		}	
		if (t<=h)
		{
			high=mid;
		}
		else
		{
			low=mid+1;
		}
	}    
	return high;
}
int main()
{    
	long int piles[10000],pilesSize,h;
    printf("Enter pile size: ");
    scanf("%d",&pilesSize);
    printf("Enter piles: ");
    int c;
    for (c=0;c<pilesSize;c++)
    {
        scanf("%d",&piles[c]);
    }
    printf("Enter h: ");
    scanf("%d",&h);
    printf("%d",minEatingSpeed(piles,pilesSize,h));   
}