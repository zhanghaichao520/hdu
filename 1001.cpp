#include<stdio.h>

int main()
{
	int mark[500]={1,0};
	int n,i,j,t,num;
	int a[500],b[500],c[500],e[500],f[500];
	while (scanf("%d",&n)!=EOF)
	{
		for (i=0;i<n;i++)
			mark[i]=1;
		num=0;
		int q=n;
		for (i=0;i<n;i++)
		{
			scanf("%d%d",&e[i],&f[i]);
		}
			for(i=0;i<n;i++)
			{
				e[i]=a[i];
				f[i]=b[i];
			}


		for (j=0;j<n;j++)
		{
			c[j]=b[j]-a[j];
		}
		for (j=0;j<n;j++)
			for(i=0;i<n-j;i++)
				if (c[i]>c[i+1])
				{
					t=c[i];c[i]=c[i+1];c[i+1]=t;
					t=a[i];a[i]=a[i+1];a[i+1]=t;
					t=b[i];b[i]=b[i+1];b[i+1]=t;
				
				}
		for (i=1;i<n;i++)
		{
			for (j=0;j<i;j++)
				if (a[i]>a[j]&&a[i]<b[j]||b[i]>a[j]&&b[i]<b[j])
			{
				/*	for (j=0;j<n;j++)
					{
					if (e[j]==a[i]&&f[j]==b[i])
						mark[j]=0;}*/
				num++;break;
			}
			
		}
		printf("%d\n",num);
		for (i=0;i<500;i++)
			if (mark[i]==1)
				printf("%d ",i+1);
	}
	return 0;
}




