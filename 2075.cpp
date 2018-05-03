#include <stdio.h>
int main()
{
	int a,b,i,j,n;
	scanf("%d",&n);
	while (n--)
	{
		scanf("%d%d",&a,&b);
		if (a%b!=0)
			printf("NO\n");
		else 
			printf("YES\n");
	}
	return 0;
}
