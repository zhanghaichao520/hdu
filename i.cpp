#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
#define min 100000
int vis[200],map[200][200],dis[200];
int main()
{
    int n,m,i,j,k,a,b,c;
    while (scanf("%d%d",&n,&m)!=EOF)
    {
        if (n==0&&m==0)
        break;
        for (i=0;i<200;i++)
        for (j=0;j<200;j++)
        {
            if (i==j)
            map[i][j]=0;
            else map[i][j]=min;
        }
        for (i=1;i<=m;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            map[a][b]=map[b][a]=c;
        }
        for (i=1;i<=n;i++)
        {
            dis[i]=map[1][i];
            vis[i]=0;
        }
        vis[1]=1;
        while (1)
        {
            int tem=min;
                for (i=1;i<=n;i++)
            {
                    if (!vis[i]&&dis[i]<tem)
                    {
                        k=i;
                        tem=dis[i];
                    }
            } 
            if (k==n) break;
            else if (tem==min) break;
            else 
            {
                vis[k]=1;
                for (i=1;i<=n;i++)
                {
                    
                    if (!vis[i]&&dis[i]>dis[k]+map[k][i])
                    dis[i]=dis[k]+map[k][i];
                }
            }
        }
        printf("%d\n",dis[n]);
    }
}
