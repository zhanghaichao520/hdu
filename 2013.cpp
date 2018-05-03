#include <stdio.h>
int main()
{

	int n, s, i;

	while (scanf("%d", &n) != EOF)

	{
		i = n - 1;
		s = 1;
		while (i--)
		{
			s = (s + 1) * 2;
		}
		printf("%d\n", s);
	}
	return 0;


}