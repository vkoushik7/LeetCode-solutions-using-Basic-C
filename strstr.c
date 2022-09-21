//Leet Code
//strstr
#include <stdio.h>
#include <string.h>
int strStr(char * haystack, char * needle)
{
	int k,i,c,flag=0;
	char *p=strstr(haystack,needle);
	if (strlen(needle)==0)
	{
		k=0;
	}
	else
	{
	    if (p==NULL)
	    {
	    	k=-1;
		}
		else
		{
	    	for (i=0;i<strlen(haystack);i++)
		    {
		    	if (haystack[i]==p[0])
		    	{
		    		k=i;
		    		for (c=0;c<strlen(p);c++)
		    		{
		    			if (haystack[i+c]!=p[c])
		    			{
		    				flag=0;
		    				break;
						}
						else
						{
							flag=1;
						}
					}
					if (flag==1)
						break;
				}
			}
		}
	}
	return k;
}
int main()
{
	char haystack[100],needle[100];
	printf("Enter haystack: ");
	gets(haystack);
	printf("Enter needle: ");
	gets(needle);
	int k=strStr(haystack,needle);
	printf("%d",k);
}