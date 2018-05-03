#include <stdio.h>
int gbs (int m,int n);
	int gys (int m,int n)
	{
		int a,r;
		if (m<n) { a=m;m=n;n=a;}
		while (m%n!=0)
		{
			r=m%n;
			m=n;
			n=r;
		}
		
		return n;
	}
	int gbs (int m,int n)
	{
		return m*n/gys (m,n);

	}
	int main()
{
	int m,n;
	while (scanf("%d%d",&m,&n)!=EOF)
	{
		int i=gbs (m,n);
		printf("%d\n",i);
	}
	return 0;
}
