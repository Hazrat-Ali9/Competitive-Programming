#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[1000][1000],n,m,i,j,sum1=0,sum2;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        sum1=0;
        sum2=0;
        if(n<1 || m<1) break;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=1; i<=n; i++)
        {
            sum1=0;
            for(j=1; j<=m; j++)
            {

                if(a[i][j]>0)
                {
                    sum1=sum1+1;
                }
            }
            if(sum1==m)
            {
                sum2=sum2+1;
                sum1=0;
            }
        }
        printf("%d\n",sum2);
    }
    return 0;
}
// Handball
