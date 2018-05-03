#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 100005
int a[maxn],b[maxn],s[maxn];
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int i,t,j,k,n,m;
	cin>>t;
	while (t--)
	{
		cin>>n;
		for (i=0;i<n;i++)
		{
			cin>>a[i];
		//	b[i]=a[i];
		}
	//	sort(b,b+n);
		int max=a[0]-a[1];
		m=a[0];
	//	cout<<max<<endl;
		for(i=1;i<n;i++)
		{
			if(max<m-a[i])
				max=m-a[i];
			if(m<a[i])
				m=a[i];
		}			 
			cout<<max<<endl;
	}
	return 0;
}

