#include <stdio.h>
#include <stdlib.h>
int a[100][100],i,j,m,n;
int max(int m,int n)
{
	int t=a[0][0];

		for (i=0;i<m;i++)
		for (j=0;j<n;j++)
		{
			if (abs(a[i][j])>abs(t))
				t=a[i][j];
		}
		return t;
}
int main()
{
	
	while (scanf("%d%d",&m,&n)!=EOF)
	{
		if (m<=0||n<=0)
			continue;
		for (i=0;i<m;i++)
			for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		int g=max(m,n);
		for (i=0;i<m;i++)
	{
			for (j=0;j<n;j++)
		{
			if (g==a[i][j])
			{
			printf("%d %d ",i+1,j+1);
			break;
			}
		}
			if (g==a[i][j])
			break;
	}
		printf("%d\n",g);
	}
	return 0;
}