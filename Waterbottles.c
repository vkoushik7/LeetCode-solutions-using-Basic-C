//Leet Code
//Water Bottles
#include <stdio.h>
int numWaterBottles(int numBottles, int numExchange)
{
    int k=0,r;
    int c=numBottles;
    int d=c;
    k=k+c;
    while (d>0)
    {
        k=k+(c/numExchange);
		c=(d/numExchange)+(d%numExchange);
		d=d/numExchange;
    }
    return k; 
}
int main()
{
	int nb,ne;
	printf("Enter values: ");
	scanf("%d%d",&nb,&ne);
	printf("%d",numWaterBottles(nb,ne));
}