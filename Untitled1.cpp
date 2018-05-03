#include <string.h>
#include <stdio.h>
char a[50000][20];
int main()
{
	char c[20];
	int n,i,j,b[50000]={0};
	while (scanf("%d",&n)!=EOF)
	{
          if (n==0)
          break;
          int max=0;
		for (i=0;i<n;i++)
			scanf ("%s",a[i]);
        if (n==1)
        {
            printf("%s",a[0]);
            printf("\n");
        }
        else
        {
		for (i=0;i<n;i++)

			for (j=1+i;j<n;j++)
			if (strcmp(a[i],a[j])==0)
			{
				b[i]++;
				if (max<=b[i])
				{
				   max=b[i];
				   strcpy(c,a[i]);
                 }
            }

		printf ("%s",c);
	    printf("\n");
        }
    }
	return 0;
}


