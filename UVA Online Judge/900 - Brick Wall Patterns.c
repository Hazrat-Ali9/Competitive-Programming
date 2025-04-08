#include<stdio.h>
int main()
{
    long long n,a[53],i;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0) break;
        a[1]=1;
        a[2]=2;
        for(i=3; i<51; i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        printf("%lld\n",a[n]);
    }
    return 0;
}

// Brick Wall Patterns
