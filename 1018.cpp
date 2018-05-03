#include<stdio.h>
#include<math.h>
//using namespace std;
int main()
{
	int n,m,i,j;
	//cin.sync_with_stdio(false);
	scanf("%d",&n);
	while (n--)
	{
		double sum=0.0;
		scanf("%d",&m);
		for (i=1;i<=m;i++)
			sum+=log10((double)i);
		printf("%d\n",(int)(sum+1));
	}
	return 0;
}