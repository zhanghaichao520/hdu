#include<stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,i,j,s[1000],e[1000],s1[1000],e1[1000],c[1000];
	while (scanf("%d",&n)!=EOF)
	{
		for (i=0;i<n;i++)
		{
			scanf("%d%d",&s[i],&e[i]);
			s1[i]=s[i];
			e1[i]=e[i];

		}
		sort(s1,s1+n);
		

	}
	return 0;
}
		
	
