#include <stdio.h>
#include <math.h>
int main ()
{

	int b,n,i,j;
	int a[50]={1,1};
	for (i=2;i<40;i++)
		a[i]=a[i-1]+a[i-2];
	scanf("%d",&b);
	while (b--)
	{
		scanf("%d",&n);
		printf ("%d\n",a[n-1]);
	}
	return 0;
}