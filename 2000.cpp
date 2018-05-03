#include <stdio.h>
int main()
{
	char a, b, c, i, f, n;
	while (scanf("%c%c%c", &a, &b, &c) != EOF)
	{
	getchar();

		if (a > b)
		{
			i = a;
			a = b;
			b = i;
		}
		if (a > c)
		{
			f = c;
			c = a;
			a = f;
		}
		if (b > c)
		{
			n = b;
			b = c;
			c = n;
		}
		 printf("%c %c %c\n", a, b, c);
	}
	return 0;
}