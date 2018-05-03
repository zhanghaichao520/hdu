#include <stdio.h>
#include <string.h>
int main()
{
	char c;
	int n,j,i;
	int h=2,z=1,t=1;
	while (scanf("%c",&c)!=EOF)
	{
		if (c=='@') break;
		scanf ("%d",&n);
		if(t==1) t=0;
       else
	   printf("\n");

		if (n!=1)
		{
		getchar();
		i=n-1;
		j=n-2;
		while (i--)
		{
			printf (" ");
		}
		printf ("%c\n",c);
		h=2;
		while (j--)
		{
			int x=n-h;
			while (x--)
			{
				printf (" ");
			}
			printf ("%c",c);
			for (z=0;z<(h-1)*2-1;z++)
			{
				printf(" ");
			}
			printf ("%c\n",c);
			h++;
		}
		for (i=0;i<2*n-1;i++)
			printf ("%c",c);
		printf("\n");
		}
	  if (n==1)
	  {
		  getchar();
			printf("%c\n",c);
	  }
	}
	return 0;
}


	
