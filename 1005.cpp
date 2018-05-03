#include <stdio.h>
#include <string.h>
int main()
{
	int n=0,m=0;
	char a[110],b[110],c[500]={0};
	while (scanf("%s%s",&a,&b)!=EOF)
	{
		m=0;
		int len1=strlen(a);
		int len2=strlen(b);
		for (int i=0;i<len1;i++)
		{
			for (int j=0;j<len2;j++)
			{
				if (a[i]==b[j]) 
				{
					c[a[i]]=1;
					
				}
			}
		}
		for (n=0;n<150;n++)
		{
			if (c[n]==1)
			{
			printf("%c",n);
			m+=1;
			c[n]=0;
			}
		}
		if (m==0)
			printf("-1");
		printf("\n");
	}
	return 0;
}