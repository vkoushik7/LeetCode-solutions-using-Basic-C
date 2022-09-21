//Leet Code
//Search in 2D Matrix
#include <stdio.h>
int searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    int l=0,m,h=*matrixColSize-1,a=0,flag=0;
    for (int i=0;i<matrixSize;i++)
    {
        if (matrix[i][*matrixColSize-1]>=target)
        {
            a=i;
            flag=1;
            break;
        }
    }
    if (!flag)
    {
        return 0;
    }
    while (l<=h)
    {
        m=(l+h)/2;
        if (matrix[a][m]==target)
        {
            return 1;
        }
        else if (matrix[a][m]<target)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    return 0;
}
int main()
{
	int n,c,i,arr[100][100];
	printf("Enter size: ");
	scanf("%d%d",&n,&c);
	printf("Enter data: ");
	for (i=0;i<n;i++)
	{
		for (int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Enter target: ");
	int t;
	scanf("%d",&t);
	int *ptr;
	ptr=&c;
	int *ptr1;
	ptr1=&arr;
	printf("%d",searchMatrix(ptr2, n, &c,t));
	
}