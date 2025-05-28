#include<stdio.h>
int main()
{
    int t,n,k,p,i,j,a[300],ca=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&k,&p);
        for(i=1; i<=p+1; i++)
        {
            a[i]=k;
            if(k==n)
            {
                k=0;
            }
            k=k+1;
        }
        printf("Case %d: %d\n",++ca,a[i-1]);
    }
    return 0;
}

// Bafana Bafana
