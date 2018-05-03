#include <stdio.h>
#include <string.h>
int main()
{
	char a[20000],c;
	int i,j,n,b[500]={0},m;
	scanf("%d",&n);
	getchar();
	while (n--)
	{
		for (i=0;i<500;i++)
		b[i]=0;
		gets(a);
		int len = strlen(a);
		m=1;
	for (i=0;i<len;i++)
	{.
		
		if (a[i]==a[i+1])
			m++;
		else 
		{
			if (m==1)
				printf("%c",a[i]);
			else
				printf("%d%c",m,a[i]);
			m=1;
		}
		
	}
		printf("\n");
	}
	return 0;
}