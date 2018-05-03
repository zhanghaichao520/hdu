#include<iostream>
#include<string.h>
using namespace std;
#define maxn 10005
int a[maxn],b[maxn];
int sum(int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(i%2)
		s-=a[i];
		else
			s+=a[i];
	}
	return s;
}
int main()
{
	int i,j,k,n,m,d,ll;
	while(cin>>n>>d>>ll)
	{
		memset(a,0,sizeof(a));
		int max,min;
		for (i=0;i<n;i++)
		{
			if(i%2)
			{
				max=n*(ll-1);
				min=n*(1-ll);
			}
			else
			{
				max=(n/2+1)*ll-(n/2);
				min=(n/2+1)-(n/2*ll);
			}
		}
		
		if(d>=min&&d<=max)
		{
			a[0]=1;
			for(i=1;i<n;i++)
			{
				if(i%2)
					a[i]=ll;
				else
					a[i]=1;
			}
			int q=0;
			for(i=0;i<n;i++)
			cout<<" "<<a[i];
			while(1)
			{
			if(sum(n)==d)
	{
		cout<<a[0];
		for(int i=1;i<n;i++)
		cout<<" "<<a[i];
		break;
	}
	else
	{
		if(a[q]==ll||a[q]==1)
			q++;
		if(q%2)
			a[q]--;
		else
			a[q]++;
	}
		}			
	}
		else
			cout<<"-1";
		cout<<endl;
	}
	getchar();
	return 0;
}

			