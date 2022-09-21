//Leet code
//Length of Last Word
#include <stdio.h>
#include <string.h>
int lengthOfLastWord(char * s) 
{
	long int i,j=0;
	i=strlen(s)-1;
	while (s[i]==' ')
	{
		i--;
	}
	while (i>=0 && s[i]!=' ')
	{
		i--;
		j++;
	}
	return j;
}
int main()
{
	char s[100];
	printf("Enter string: ");
	gets(s);
	printf("%d",lengthOfLastWord(s));
}