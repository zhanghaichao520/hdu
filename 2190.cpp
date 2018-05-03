#include <stdio.h>
int main()
{
    int a[1001]={0,1,3},n,i,j;
    for (i=3;i<100;i++)
        a[i]=(2*a[i-2]+a[i-1]);
	scanf ("%d",&j);
	while (j--)
	{

   scanf("%d",&n);
        printf ("%d\n",a[n]);
    }
    return 0;
}