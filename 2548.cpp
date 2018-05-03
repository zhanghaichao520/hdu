#include <stdio.h>
int main ()
{
	int n;
	double u,v,w,s,sum;
	scanf("%d",&n);
	while (n--)
	{
		scanf("%lf%lf%lf%lf",&u,&v,&w,&s);
		sum=w*(s/(u+v));
		printf("%.3f\n",sum);
	}
	return 0;
}