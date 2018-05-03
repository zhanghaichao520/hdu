#include <stdio.h>
__int64 gbs (__int64 m,__int64 n);
	__int64 gys (__int64 m,__int64 n)
	{__int64 r;
		while (m%n!=0)
		{
			r=m%n;
			m=n;
			n=r;
		}
		
		return n;
	}
	__int64 gbs (__int64 m,__int64 n)
	{
		return m*n/gys (m,n);

	}
	int main()
{
	__int64 m[10000],i,j,n;
	while (scanf("%I64d",&n)!=EOF)
	{
		for ( j=0;j<n;j++)
			scanf("%I64d",&m[j]);
		__int64 x=1;
		for ( j=0;j<n;j++)
			 x=gbs(x,m[j]);
			printf("%I64d\n",x);
	}
	return 0;
}
