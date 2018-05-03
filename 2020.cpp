#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int a[200],j,t,n;
	while (scanf("%d",&n)!=EOF)
	{
		if (n==0) break;

			for (i=0;i<n;i++)
			{
				scanf ("%d",&a[i]);

			}
			for (j=0;j<n;j++)
			{
			for (i=0;i<n-j-1;i++)
			{
			
				if (abs(a[i])<abs(a[i+1]))
				{
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
			}
			}
			for (i=0;i<n;i++)
			{
			printf("%d",a[i]);
			if (i!=n-1)
				printf (" ");
			}
			printf("\n");
		
	}
	return 0;
}