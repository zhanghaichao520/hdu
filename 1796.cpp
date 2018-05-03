#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
__int64 n,a[20];
int sum;
__int64 flag=0;
__int64 gcd(__int64 x,__int64 y)
{
    if(x<y)
	{
		int t=x;
		x=y;
		y=t;
	}
    if(y==0) return x;
    else return gcd(y,x%y);
}
void dfs(int i,__int64 lcm,int p )
{
	lcm=a[i]/gcd(a[i],lcm)*lcm;
	if (p%2) 
		sum+=n/lcm;
	else
		sum-=n/lcm;
	for (int k=i+1;k<flag;k++)
		dfs(k,lcm,p+1);
}
int main()
{
	
	__int64 i,j,k,m;
	while (scanf("%I64d%I64d",&n,&m)!=EOF)
	{
		flag=0;sum=0;
		for (i=0;i<m;i++)
		{
			scanf("%I64d",&k);
			if (k) 
			{
				a[flag]=k;
				flag++;
			}
		}
		n--;
		for (i=0;i<flag;i++)
			dfs(i,a[i],1);
		printf("%d\n",sum);
	}
	return 0;
}
