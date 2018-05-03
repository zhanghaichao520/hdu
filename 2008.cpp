#include <stdio.h>
int main()
{
	int n;
	double a;
	while (scanf("%d",&n)!=EOF)
	{
		int sum1=0,sum2=0,sum3=0;
		if (n!=0)
		{
		while (n--)
		{
			scanf("%lf",&a);
			if (a<0) sum1+=1;
			if (a==0) sum2+=1;
			if (a>0) sum3+=1;
		}
		printf("%d %d %d\n",sum1,sum2,sum3);
	}
	}
	return 0;
}
		