#include <stdio.h>
#include <math.h>
int main()
{
	int m,i,j,p,q,a[1000];
	scanf("%d",&m);
	while (m--)
	{
		scanf ("%d%d",&p,&q);
		int sum1=0,sum2=0;
		for (i=1;i<p;i++)
		{
			if (p%i==0)
				sum1+=i;
		}
		for (i=1;i<q;i++)
		{
			if (q%i==0)
				sum2+=i;
		}
		if (sum1==q&&sum2==p)
		printf("YES\n");
		else 
			printf("NO\n");
	}
	return 0;
}