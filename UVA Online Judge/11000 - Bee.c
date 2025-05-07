#include<stdio.h>
int main()
{
    long long n,i,a[100000];
    while(scanf("%lld",&n)==1)
    {
        if(n==-1) break;
        a[-1]=0;
        a[0]=1;
        a[1]=2;
        a[2]=4;
        for(i=3; i<=n; i++)
        {
            a[i]=(a[i-1]+a[i-2])+1;
        }
        printf("%lld %lld\n",(a[n-1]),a[n]);
    }
    return 0;
}

// Bee 