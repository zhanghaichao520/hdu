#include<stdio.h>
int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int x,y,z,n,i;
	while (scanf("%d/%d/%d",&x,&y,&z)!=EOF)
	{
		if (x/4==0&&x/100==0||x/400==0)
	{
			a[2]=29;
	}
	    	i=z;
			for ( n=1;n<y;n++)
		 {
		       i+=a[n];
		 }
			printf("%d\n",i);
			a[2]=28;
	}
	return 0;
}
