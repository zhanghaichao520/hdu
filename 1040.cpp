#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int a[5200],n,m,i,j;
	scanf("%d",&n);
	while (n--)
	{
		scanf("%d",&m);
		for (i=0;i<m;i++)
			scanf ("%d",&a[i]);
		sort (a,a+m);
		for (i=0;i<m;i++)
		{
			printf("%d",a[i]);
			if(i!=m-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
