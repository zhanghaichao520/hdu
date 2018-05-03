#include <stdio.h>
#include <math.h>
int main()
{
	double c[100];
	double s=0,a,b;
	int m,n;
	while (scanf("%d",&m)!=EOF)
	{
		
		
		while (m--)
		{
			s=0;
			a=0;
			scanf("%d",&n);
		while (n--)
		{
			
			a+=1;
			b=(1/a)*pow((-1),(a+1));
			s+=b;
		}
			printf("%.2f\n",s );
		
		}
	}
	return 0;
}
			