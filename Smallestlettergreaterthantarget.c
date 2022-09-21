//Leet Code
//Smallest letter greater than target
#include <stdio.h>
char nextGreatestLetter(char* letters, int lettersSize, char target)
{
    int low=0;
    int high=lettersSize-1;
    int mid;
    while (low<=high)
    {
    	mid=(low+high)/2;
    	if (letters[mid]<=target)
    	{
    		low=mid+1;
		}
		else
		{
			high=mid;
		}
	}
	return letters[low%(lettersSize-1)];
}
int main()
{
	char arr[100],k;
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("enter data for array: ");
	for (int c=0;c<n;c++)
	{
		scanf("%c",arr[c]);
	}
	printf("Enter target: ");
	scanf("%c",&k);
	printf("%c",nextGreatestLetter(arr,n,k));
}