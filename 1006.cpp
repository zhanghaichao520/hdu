#include <stdio.h>
int main()
{
	int a[50] [50];
	int n,i,j,m,s=0,d=0,k=0,p=0,q=0,w=0;
	while (scanf("%d",&n)!=EOF)
	{
		s=0;d=0;k=0;p=0;q=0;w=0;
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
				scanf("%d",&a[i] [j]);
		}
		for (i=0;i<n-1;i++)
		{
			if (a[i+1] [i+1]!=(a[i] [i])+1)
				s=1;
		}
		j=n-1;
		while (j--)
		{
			if (j!=0)
			{
				if (a[n-1] [j]!=(a[n-1] [j-1])-1)
				{
					d=1;
				}
			}
		}
				if(a[0][0]!=1)
					k=1;
		for (i=n-1;i>1;i--)
		{
			if (a[i][0]!=(a[i-1][0])-1)
				p=1;
		}
				if (n>3)
		{
		for (i=0;i<n-1;i++)
		{
			for (m=1+i;m<n;m++)
			{
			if (a[i][m]!=0)
				q=1;
			} 
		}

		for (i=2;i<n-1;i++)
		{
			for(m=1;m<i;m++)

			{
			if (a[i][m]!=0)
				w=1;
			} 
		}
		}
		if (s==1||d==1||k==1||p==1||q==1||w==1)
			printf ("NO");
		else
			printf("YES");
		printf("\n");
	}
	return 0;
}



