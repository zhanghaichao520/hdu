#include<cstdio>
#include<iostream>
#include<cmath>
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;
#define min -99999
int main()
{
	int i,j,k,n,m;
	int b[500],g[500];
	while (cin>>n)
	{
		for (i=0;i<n;i++)
			cin>>b[i];
		cin>>m;
		for (i=0;i<m;i++)
			cin>>g[i];
		sort(b,b+n);
		sort(g,g+m);
		int sum=0;
		for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
			{
				k=abs(g[j]-b[i]);
				if (k<=1&&k>=0)
				{
					b[i]=g[j]=min;
					sum++;
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}



