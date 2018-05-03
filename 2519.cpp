#include <stdio.h>
int jc(int a,int b)
{
	 int ji=1;
		for (int i=a;i>(a-b);i--)
			ji=ji*i;
		return ji;
}
int main()
{
	int i,j,n,m,sum;
  	int t1,t2=1;
	scanf ("%d",&n);
	while (n--)
	{
		t2=1;
		scanf ("%d%d",&i,&j);
		if (i<j)
			printf("0\n");
		else
		{
			t1=jc(i,j);
			for (m=1;m<=j;m++)
				t2=t2*m;
			printf("%d\n",t1/t2);
		}
	}
	return 0;
}
