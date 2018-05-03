#include <stdio.h>
int main()
{
	__int64 a[100]={1},b[100]={0},i,j,n,m;
    for (i=1;i<70;i++)
	{
		a[i]=3*a[i-1]+2*b[i-1];
		b[i]=a[i-1]+b[i-1];
	}
	while (scanf("%I64d",&n)!=EOF)
	{
		if (n==-1)
			break;
		printf("%I64d, %I64d\n",a[n],b[n]);
	}
	return 0;


}
