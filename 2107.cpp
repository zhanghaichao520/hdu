#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int a[5200],n,m,i,j;
    while (scanf("%d",&n)!=EOF)
	{
		i=0;
		if (n==0) break;
		 while (n--)
		{
			scanf("%d",&a[i]);
			i++;
		}
		 sort(a,a+i);
        printf("%d\n",a[i-1]);
	}
    return 0;
}
