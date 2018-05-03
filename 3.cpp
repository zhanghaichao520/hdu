#include<cstdio>
#include<iostream>
#include<cmath>
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;
#define maxn 0xfffffff
int a[20];
int zhc(int n)
{
	int i=0;
	while (n)
	{
		if ((n%10)==8)
			return 1;
		n=n/10;
	}
	return 0;
}
int main()
{
	int n,m,i,j,k;	
	while (cin>>n)
	{
		int sum=0;
		if (n<-8)
		{
			int rzh=abs(n);
			rzh--;
			sum++;
			for (i=rzh;i>0;i--)
			{
				if (zhc(i))
				{
				sum=sum+rzh-i;
				break;
				}
			}
		}
		if (n>=-8&&n<0)
		{
			sum=8-n;
		}
		if (n>=0)
		{
			n++;
			sum++;
		for (i=n;;i++)
		{
			if (zhc(i))
			{
				sum=sum+i-n;
				break;
			}
		}
		}
		cout<<sum<<endl;
	}
	return 0;
}

