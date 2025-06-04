#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long a[81],i,x;
    a[0]=1;
    a[1]=1;
    for(i=2; i<81; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    while(scanf("%lld",&x))
    {
        if(x==0) break;

        else
        {
            printf("%lld\n",a[x]);
        }
    }
    return 0;
}

// Bees ancestors