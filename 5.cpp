#include<cstdio>
#include<iostream>
#include<cmath>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
#define min -99999
int gol[2000005],zhc[200005];
int g[200005];
int main()
{
	int i,j,k,n,m,a,b;
	while (cin>>n)
	{
	//	memset(g,0,sizeof(g));
		for (i=0;i<n;i++)
		{
			cin>>a>>b;
			if (!a&&b) gol[1]=b;
			zhc[a]=b;
			g[a]++;
			g[b]--;
		}
		for (i=0;i<200005;i++)
		{
			if (g[i]==1)
				gol[0]=i;
		}
		for (i=2;i<n;i++)
			gol[i]=zhc[gol[i-2]];
		for (i=0;i<n;i++)
		{
			cout<<gol[i];
			if (i!=n-1)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}


	
