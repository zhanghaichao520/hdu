#include <stdio.h>
#define pi 3.14159265
int main()
{
	double l,v,r;
	while (scanf("%lf",&l)!=EOF)
	{
		r=l/2;
		v=4*pi*r*r*r/3;
		printf("%.3f\n",v);
	}
	return 0;
}
