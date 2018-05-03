#include <stdio.h>
int main()
{
	float sum;
	int a[110];
	int n, b, i, j;
	while (scanf("%d", &n) != EOF)
	{
		for (b = 0; b < n; b++)
		{
			scanf("%d", &a[b]);
		}
		for (b = 0; b <n-1 ; b++)
		{
			for (j = 0; j <n - 1- b; j++)
			{
				if (a[j] > a[j+1])
				{
					i = a[j];
					a[j] = a[j+1];
					a[j+1] = i;
				}
			}
		}
			sum = 0;
		for (b = 1; b < n - 1; b++)
		sum += a[b] ;
		printf("%.2f\n", sum / (n - 2));
	}
	return 0;
}