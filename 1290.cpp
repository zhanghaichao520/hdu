#include <stdio.h>
#include <math.h>
int main ()
{
	int n,m;
	while (scanf("%d",&n)!=EOF)
	{
		m=(n*n*n+5*n)/6+1;

		printf("%d\n",m);
	}
	return 0;
}