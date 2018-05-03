#include <stdio.h>
int main()
{
	int n, a, i, sum;
	while (scanf("%d", &n) != EOF)
	{
		
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