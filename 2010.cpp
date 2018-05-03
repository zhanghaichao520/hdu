#include <stdio.h>
int main()
{
	int m,n,a,i,d,b;
	while (scanf("%d%d",&m,&n)!=EOF)
	{
		if (m>n) {b=m;m=n;n=b;}
		d=0;
		i=0;
		for (;m<=n;m++)
		{
		if	(m==(m/100)*(m/100)*(m/100)+(m/10%10)*(m/10%10)*(m/10%10)+(m%10)*(m%10)*(m%10))
		{
			i+=1;
			if (d!=0)
			printf(" ");
			d+=1;
		printf("%d",m);
		}
		}
		if (i!=0)
		printf("\n");
		if (i==0)
		printf("no\n");
	}
	return 0;
}
	