#include<iostream>
#include<cstdio>
#include<cmath>
#include<string.h>
using namespace std;
#define maxn 100005
//int a[maxn][maxn],mark[maxn][maxn];
char s[maxn];
int main()
{
	int i,j,k,n,m;
	while (gets(s))
	{	
		//getchar();
		int mark[300];
		int len=strlen(s);
		double sum=0;
		memset(mark,0,sizeof(mark));
		for (i=0;i<len;i++)
			mark[s[i]]++;
		for (i=0;i<300;i++)
		{
			
				sum+=(double)mark[i]*mark[i];
			
			
		}
		printf("%.0f\n",sum);
	}
	return 0;
}
