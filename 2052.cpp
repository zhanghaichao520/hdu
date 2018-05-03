#include <stdio.h>
int main()
{
	char a[1000][1000]={32};
	int i,j,n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
			for (i=0;i<n+m;i++)
			for (j=0;j<m+n;j++)
		a[i][j]=32;
		a[0][0]='+';
		a[0][n+1]='+';
		a[m+1][0]='+';
		a[m+1][n+1]='+';
		for (i=1;i<=n;i++)
		{
			a[0][i]='-';
			a[m+1][i]='-';
		}
		for (j=1;j<=m;j++)
		{
			a[j][0]='|';
			a[j][n+1]='|';
		}
		for (i=0;i<m+2;i++)
		{
			for (j=0;j<n+2;j++)
				printf("%c",a[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
