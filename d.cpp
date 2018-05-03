#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 200005
int s[maxn],e[maxn],a[maxn],b[maxn];
int main()
{
	int i,j,k,n,m;
	while (cin>>n)
	{
		int flag=0;
		for (i=0;i<n;i++)
		{
			cin>>s[i]>>e[i];
			a[i]=s[i];
			b[i]=e[i];
		}
		sort(s,s+n);
		sort(e,e+n);
		j=s[0];
		k=e[n-1];
		for (i=0;i<n;i++)
		{
			if(j==a[i]&&k==b[i])
			{
				flag=1;
				cout<<i+1<<endl;
			}
		}
	//	cout<<j<<k;
		if(!flag)
			cout<<"-1"<<endl;			
	}
	return 0;
}