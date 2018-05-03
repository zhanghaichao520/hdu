#include <stdio.h>
int main()
{
	int a,b,i,j,sum1,sum2;
	while (scanf("%d%d",&a,&b)!=EOF)
	{
		sum1=0;
		sum2=0;
		for (i=a;i<=b;i++)
		{
			
			if (i%2!=0)
			{
				sum2+=i*i*i;
			}
			else
			{
				sum1+=i*i;
			}
		}
		printf("%d %d\n",sum1,sum2);
	}
	return 0;

}
