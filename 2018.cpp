#include<stdio.h>
int main()
{
	int i,j,sum,n;
	int a[100000]={0,1,2,3,4};
	for (i=5;i<55;i++)
		a[i]=a[i-1]+a[i-3];
	while(scanf("%d",&n)!=EOF)
	{
		if(n!=0)
		{
			printf("%d\n",a[n]);
		}
	}
	return 0;
}