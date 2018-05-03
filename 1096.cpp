#include <stdio.h>
int main()
{
	int n, a, i, sum,s;
	scanf("%d", &i);
	while (i--)
	{
		scanf("%d", &n);
		{

			sum = 0;
			
				for (s=1;s<=n;s++)
				{
					 scanf("%d", &a);
					sum = sum + a;
			}
		printf("%d\n", sum);
		if (i!=0) 		printf("\n");
		}
		
	}
	return 0;
}