#include <stdio.h>
int main()
{
	int n,sum,a;
	scanf("%d",&n);
	{
		while(n--)
		{
			sum=0;
			while (1)
			{
				scanf("%d",&a);
				sum+=a;
				if(getchar()=='\n')
				{
					printf("%d\n",sum);
					break;
				}
		
			}
				if (n!=0) printf("\n");
		}
	}
	return 0;
}


