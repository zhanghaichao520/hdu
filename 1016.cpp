#include<iostream>
#include<cstdio>
#include<cmath>
#include<string.h>
using namespace std;
#define maxn 50
int n,vis[maxn],a[maxn];
bool prime(int num)
{
	if (num==1||num==0)
		return false;
	else
	{
		for (int i=2;i*i<=num;i++)
			if (num%i==0)
				return false;
			return true;
	}
}
void dfs (int pos)
{
	int i,j,k;
	if (pos==n&&prime(a[n-1]+a[0]))
	{
		cout<<"1";
		for (i=1;i<n;i++)
			printf(" %d",a[i]);
		cout<<endl;
	}
	else
	{
		for (i=2;i<=n;i++)
		{
			if (!vis[i]&&prime(i+a[pos-1]))
			{
				a[pos]=i;
				vis[i]=1;
				dfs(pos+1);
				vis[i]=0;
			}
		}
	}
}
int main()
{
	int i,j,k,m;
	int flag=1;
	//cin.sync_with_stdio(false);
	while (cin>>n)
	{
		memset(vis,0,sizeof(vis));
	//	memset(a,0,sizeof(a));
	//	vis[0]=1;
		cout<<"Case "<<flag++<<":"<<endl;
		a[0]=1;
		dfs(1);
		cout<<endl;
	}
	return 0;
}