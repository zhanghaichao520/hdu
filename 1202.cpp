#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,j,t=0;
	double s[5000],p[50000],d[5000]={0.0},gpa,sum1,sum2;
	while (scanf("%d",&n)!=EOF)
	{
		getchar();
		sum1=sum2=0;
		for (i=0;i<n;i++)
		scanf("%lf&lf",&s[i],&p[i]);
		getchar();
		for (i=0;i<n;i++)
		{
			if (p[i]==-1) continue;
			switch((int)(p[i]/10))
			{
			case 10:
			case 9: ;break;
			case 8: d[i]=3;break;
			case 7: d[i]=2;break;
			case 6: d[i]=1;break;
			}

		}
		for (i=0;i<n;i++)
		printf("%d ",s[0]);
	}
	return 0;
}
		