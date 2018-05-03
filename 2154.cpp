#include <stdio.h>
int main()
{
	int a[1001]={0,0,2,2},n,i,j;
	for (i=4;i<1001;i++)
		a[i]=(2*a[i-2]+a[i-1])%10000;
	while (scanf("%d",&n)!=EOF)
	{
		if (n==0) break;
		printf ("%d\n",a[n]);
	}
	return 0;
}