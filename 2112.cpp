#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define INF 0xfffffff
#define MAXN 200
int map[MAXN][MAXN],dis[MAXN],vis[MAXN];
int n;
char place[MAXN][MAXN];
int min(int a,int b)
{
	return a<b?a:b;
}
int find (char s[])
{
	int i;
	for (i=0;i<=n;i++)
		if (strcmp(place[i],s)==0)
			return i;
			n++;
			strcpy(place[n],s);
			return n;
}
void zhc(int s)
{
	int i,j,k,m;
	for(i=0;i<MAXN;i++)
	{
		vis[i]=0;
		dis[i]=map[s][i];
	
	}
	vis[s]=1;
	for (i=1;i<=n;i++)
	{
		int tem=INF;
		for (j=1;j<=n;j++)
		{
			if (!vis[j]&&dis[j]<tem)
			{
				k=j;
				tem=dis[j];
			}
		}
	
		vis[k]=1;
		if (tem==INF) break;
		for (j=1;j<=n;j++)
		{
			if (!vis[j]&&dis[j]>dis[k]+map[k][j])
			{
				dis[j]=min(dis[k]+map[k][j],dis[j]);		
			}
		}	
		
	}
}
int main()
{
	int i,j,k,N,m;
	int s,e,a,b,t;
	char ch[MAXN];
	cin.sync_with_stdio(false);
	while (cin>>N)
	{
		n=0;
		if (N==-1)
			break;
		cin>>ch;
		s=find(ch);
		cin>>ch;
		e=find(ch);
		for (i=0;i<MAXN;i++)
		for (j=0;j<MAXN;j++)
		{
			if (i==j)
				map[i][j]=0;
			else
				map[i][j]=INF;
		}
		for (i=0;i<N;i++)
		{
			cin>>ch;
			a=find(ch);
			cin>>ch;
			b=find(ch);
			cin>>t;	
			if (t<map[a][b])
			map[a][b]=map[b][a]=t;
		
		}
	zhc(s);
	if (dis[e]!=INF)
		cout<<dis[e]<<endl;
	else 
		cout<<"-1"<<endl;
	}
	return 0;
}