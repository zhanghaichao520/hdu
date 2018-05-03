#include <stdio.h>
#include <math.h>
int main ()
{
	__int64 n,m,p;
	__int64 a[20]={0,1};
	for (p=2;p<20;p++)
		a[p]=(p)*(a[p-1]+a[p-2]);
	while (scanf("%I64d",&n)!=EOF)
	{
		printf("%I64d\n",a[n-1]);
	}
	return 0;
}