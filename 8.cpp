#include <stdio.h>
#include <string.h>
int main()
{
	char a[10000],c;
	int b[10000]={0},i,j,l=0,r=10000,n=5000;
	gets(a);
	int len=strlen(a);
	b[n]=1;
	for (i=1;i<len;i++)
	{
		if (a[i]=='l')
		{		
			r=n;
			n=(r-l)/2;
			b[n]=i+1;		
			
		}
		if (a[i]=='r')
		{
			
			l=n;
			n=(2*r-l)/2;
			b[n]=i+1;
		}
	}
	for (i=0;i<10000;i++)
	{
		if (b[i]!=0)
			printf("%d\n",b[i]);
	}
	return 0;
}