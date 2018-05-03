#include <stdio.h>
int main()
{
    int a, b, sum;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        sum = a + b;
		if ((sum%86)==0)
        printf("yes\n");
		else
			printf("no\n");
    }
	return 0;
}