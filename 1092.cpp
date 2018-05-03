#include <stdio.h>
int main()
{
	int n, a, i, sum;
	while (scanf("%d", &n) != EOF)
	{if (n==0) break;
		
			sum = 0;
		{
			while (n--)
			{
				scanf("%d ", &a);
				sum = sum + a;
			}

			printf("%d\n", sum);
		}
	}
	return 0;
}