#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	__int64 i,n,a[1005],s1,s2;
	while(scanf("%I64d",&n)!=EOF)
	{
		__int64 s=0;
		for(i=0;i<n;i++)
		{
			scanf("%I64d",&a[i]);
			s+=a[i];
		}
	    for(i=0;i<=(n-1)/2;i+=2)
		{
		  a[n-1-i]>a[i];
		  s1+=a[n-i-1];
		}
	    s2=s-s1;
		printf("%I64d %I64d\n",s1,s2);

	}
	return 0;
}
