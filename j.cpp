#include<iostream>
#include<cstdio>
#include<cmath>
#include<string.h>
using namespace std;
#define maxn 1005
int a[maxn],mark[maxn][maxn];
char s[maxn];
int find(int x)
{
	while(a[x]!=x)
		x=a[x];
	return x;
}
void zhc(int c,int d)
{
	if (find(c)!=find(d))
		a[find(c)]=find(d);	
	return;
		
}

int main()
{
	int i,j,k,n,m,t,c,d;
	cin>>t;
	while (t--)
	{	
		int sum=0;
		cin>>n>>m;
		for (i=0;i<=n;i++)
			a[i]=i;
		while (m--)
		{
			cin>>c>>d;
			zhc(c,d);
		}
		for (i=1;i<=n;i++)
		if (a[i]==i)
			sum++;
		if(t)
			getchar();
		cout<<sum<<endl;
	}
	return 0;
}
