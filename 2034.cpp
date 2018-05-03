#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int a[1000],b[1000],i,j,n,m,t,t1,c[1000];
    while (scanf("%d%d",&n,&m)!=EOF)
    {
        t1=0;
        if (m==0&&n==0) continue;
        for (i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<m;i++)
            scanf("%d",&b[i]);
        for (i=0;i<n;i++)
        {
             t=0;
            for(j=0;j<m;j++)
            {
                if(a[i]!=b[j])
                    t++;
            }
            if (t==m)
            {
            c[t1]=a[i];
            t1++;
            }
        }
		sort(c,c+t1);
        if (t1==0)
            printf("NULL");
		else 
		{
			for (i=0;i<t1;i++)
			{
				printf("%d ",c[i]);
			}
		}
        printf("\n");
		
    }
    return 0;
}
        