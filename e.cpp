#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
#define maxn 0xfffffff
int main()
{
	int i,j,k,n,m,a[12000];
	while(cin>>n)
	{
		k=5;
		if(n<3)
			cout<<"-1"<<endl;
		if(n==3)
			cout<<"210"<<endl;
		if(n>3)
		{
			cout<<"1";
				for(i=0;i<n-4;i++)
					cout<<"0";
			for (i=4;i<=n;i++)
			{
				k=k*10;
				if(k>=210)
					k=k%210;
			}
			if(k<100)
				cout<<"0";
			cout<<k<<endl;
		}
		
	}
	return 0;
}

