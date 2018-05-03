#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,i,j,a[500] ;
	while (scanf("%d%d",&n,&m)!=EOF)
	{
		if (n==0&&m==0)
			break;
			j=0;
		for (i=100*n;i<(n+1)*100;i++)
		{
			if (i%m==0)
			{
				a[j]=i;
				j++;
			}
		}
		for (i=0;i<j;i++)
		{
			if (a[i]-100*n<10)
				printf("0%d",a[i]-100*n);
			else
			printf ("%d",a[i]-100*n);
			if(i!=j-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}