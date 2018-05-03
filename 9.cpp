#include <stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	double a[5000],max;
	int i,j,n,m;
	while (scanf("%d%d",&n,&m)!=EOF)
	{
		for (i=0;i<n;i++)
			scanf("%lf",&a[i]);
		sort(a,a+n);
		max=a[0];
		for (i=1;i<n;i++)
			if (((a[i]-a[i-1])/2)>max)
				max=(a[i]-a[i-1])/2;
		if ((m-a[n-1])>max)
				max=(m-a[n-1]);
		printf("%.3f\n",max);
	}
	return 0;
}
