//Leet Code
//Reformat Date
#include <stdio.h>
char * reformatDate(char * date)
{
	int a,b,c,i;
	if (date[1]!=1 || date[1]!=2 || date[1]!=3 || date[1]!=4 || date[1]!=5 || date[1]!=6 || date[1]!=7 || date[1]!=8 || date[1]!=9 || date[1]!=0)
	{
		a=date[0];
	}
	else
	{
		a=(date[0]*10)+(date[1]);
	}
	if (date[4]!=' ')
	{
		if (date[4]=='J' && date[5]=='a')
		{
			b=1;
		}
		else if (date[4]=='F' && date[5]=='e')
		{
			b=2;
		}
		else if (date[4]=='M' && date[5]=='a')
		{
			b=3;
		}
		else if (date[4]=='A' && date[5]=='p')
		{
			b=4;
		}
		else if (date[4]=='M' && date[5]=='a')
		{
			b=5;
		}
		else if (date[4]=='J' && date[5]=='u' && date[6]=='n')
		{
			b=6;
		}
		else if (date[4]=='J' && date[5]=='u' && date[6]=='l')
		{
			b=7;
		}
		else if (date[4]=='A' && date[5]=='u')
		{
			b=8;
		}
		else if (date[4]=='S' && date[5]=='e')
		{
			b=9;
		}
		else if (date[4]=='O' && date[5]=='c')
		{
			b=10;
		}
		else if (date[4]=='N' && date[5]=='o')
		{
			b=11;
		}
		else if (date[4]=='D' && date[5]=='e')
		{
			b=12;
		}
	}
	else
	{
		if (date[5]=='J' && date[6]=='a')
		{
			b=1;
		}
		else if (date[5]=='F' && date[6]=='e')
		{
			b=2;
		}
		else if (date[5]=='M' && date[6]=='a')
		{
			b=3;
		}
		else if (date[5]=='A' && date[6]=='p')
		{
			b=4;
		}
		else if (date[5]=='M' && date[6]=='a')
		{
			b=5;
		}
		else if (date[5]=='J' && date[6]=='u' && date[7]=='n')
		{
			b=6;
		}
		else if (date[5]=='J' && date[6]=='u' && date[7]=='l')
		{
			b=7;
		}
		else if (date[5]=='A' && date[6]=='u')
		{
			b=8;
		}
		else if (date[5]=='S' && date[6]=='e')
		{
			b=9;
		}
		else if (date[5]=='O' && date[6]=='c')
		{
			b=10;
		}
		else if (date[5]=='N' && date[6]=='o')
		{
			b=11;
		}
		else if (date[5]=='D' && date[6]=='e')
		{
			b=12;
		}
	}
	if (date[6]!=' ')
	{
		c=(date[7]*1000)+(date[8]*100)+(date[9]*10)+date[10];
	}
	else
	{
		c=(date[8]*1000)+(date[9]*100)+(date[10]*10)+date[11];	
	}
	for (i=3;i>=0;i--)
	{
		date[i]=(c%10);
		c=c/10;
	}
	date[4]='-';
	if (b/10==0)
	{
		date[5]=0;
		date[6]=b;
	}
	else
	{
		date[5]=(b%10);
		b=b/10;
		date[6]=(b%10);
	}
	date[7]='-';
	if (a/10==0)
	{
		date[8]=0;
		date[9]=a;
	}
	else
	{
		date[8]=(a%10);
		a=a/10;
		date[9]=(a%10);
	}
}
int main()
{
	char s[100],c;
	printf("Enter string: ");
	gets(s);
	reformatDate(s);
	for (c=0;c<10;c++)
	{
		printf("%c",s[c]);
	}
}