#include<cstdio>
#include<iostream>
#include<cmath>
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;
#define maxn 0xfffffff
int main()
{
	int n,m,i,j,k;
	int a[10000],b[10000],c[2][10000];
	while (cin>>n)
	{
		int sum=0;
		for (i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		for (i=0;i<n;i++)
		{
			if (a[i]!=b[i])
			{
				c[0][sum]=i;
				for (j=i;j<n;j++)
				{
					if (a[j]==b[i])
					{
						c[1][sum]=j;
						sum++;
						int t;
						t=a[i];
						a[i]=a[j];
						a[j]=t;
						break;
					}
				}
			}
		}
		cout<<sum<<endl;
		for (i=0;i<sum;i++)
			cout<<c[0][i]<<" "<<c[1][i]<<endl;
	}
	return 0;
}



