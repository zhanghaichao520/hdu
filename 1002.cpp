#include <stdio.h>
#include <string.h>
int main()
{
	char a[10000],b[10000];	
	int i,j,na,nb,sum[10000]={0};
	int m=1,n,max;
	scanf("%d",&n);
	while (n--)
	{
		int c[10000]={0},d[10000]={0};
		int x=0,y=0;
		scanf("%s",&a);
		scanf("%s",&b);
		int lena=strlen(a);
		int lenb=strlen(b);
		max=lena>lenb?lena:lenb;
		na=lena;nb=lenb;
		while (na--)
		{
			c[max-x]=a[na]-48;
			x++;
		}
		while (nb--)
		{
			d[max-y]=b[nb]-48;
			y++;
		}	

		for (i=max;i>=0;i--)
		{
			sum[i]=c[i]+d[i];
			if (sum[i]>9)
			{
				sum[i]-=10;
				c[i-1]++;
			}
		}
	printf("Case %d:\n%s + %s = ",m,a,b);
		if (sum[0]!=0)
			printf("1");
		for (i=1;i<=max;i++)
			printf("%d",sum[i]);
		m++;
		if (n>=1)
		printf("\n\n");
		else
			printf("\n");
	}
	return 0;
}
