#include <stdio.h>
int main ()
{
	__int64 a[5000]={0,1,2},i,j,n;
	for (i=3;i<60;i++)
		a[i]=a[i-1]+a[i-2];
	while (scanf("%I64d",&n)!=EOF)
	{
		printf("%I64d\n",a[n]);
	}
	return 0;
}
