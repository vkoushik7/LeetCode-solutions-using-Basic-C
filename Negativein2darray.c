//Leet Code
//Count Negative Numbers in a sorted Matrix
#include <stdio.h>
int countNegatives(int** grid, int gridSize)
{
    int l=0,m,h=gridSize-1;
    int i=0,c=0;
    int flag=0;
    for (i = gridSize-1; i >= 0; --i)
	{
        h = gridSize - 1;
        while (l <= h) 
		{
            m = (l+h)/2;
            if (grid[i][m] < 0) 
			{
                h = m - 1;
            }
            else 
			{
                l = m + 1;
            }
        }
            
        c += (gridSize - l);
    }
    return c;
}
int main()
{
	int arr[100][100],n,i,j;
	printf("Enter grid value: ");
	scanf("%d",&n);
	printf("Enter data: ");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("%d",countNegatives(arr,n));
}