#include <stdio.h>
int main()
{
	int  n,i,j,m,a[100];
	int  q,w,e,r,t,y;
	while (scanf("%d",&n)!=EOF)
	{
		if (n==0) continue;
		int sum=0;
		q=w=e=r=t=y=0;
 		for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			q=a[i]/100;
			w=(a[i]%100)/50;
			e=(a[i]%50)/10;
			r=(a[i]%10)/5;
			t=(a[i]%5)/2;
			y=a[i]-100*q-50*w-10*e-5*r-2*t;
			sum+=(q+w+e+r+t+y);
		}
		printf("%d\n",sum);
	}
	return 0;
}

