#include <stdio.h>
#include <math.h>
int main()
{

	int t=0,i,a,n=0,m,j;
	while (scanf("%d%d",&n,&m)!=EOF)
	{
		t=0;
		int num[500]={0};
		int x=0;
		for (i=n;i<=m;i++)
		{
			for (j=2;j<=sqrt(i);j++)
			{
				if (i%j==0) t++;
			}
			if (t==1)
			{
				num[x]=i;
				x++;
			}
			t=0;	
		}
		if (num[0]!=0)
		{
				printf("Yes.\n");
				for (int k=0;k<x;k++)
				{
					printf("%d",num[k]);
					if (k!=x-1) printf(" ");
				}
		}
		else printf("No.");
		printf("\n");
	}

	return 0;
}