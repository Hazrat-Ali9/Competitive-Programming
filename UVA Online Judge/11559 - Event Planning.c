#include<stdio.h>
int main()
{
    long long n,b,h,w,p,a,i,j,m,q,max,sum,arr[100000];
    while(scanf("%lld%lld%lld%lld",&n,&b,&h,&w)==4)
    {
        sum=0,max=20000000;
        while(h--)
        {
            scanf("%lld",&p);
            for(j=0; j<w; j++)
            {
                scanf("%lld",&arr[j]);
            }
            for(j=0; j<w; j++)
            {
                if(arr[j]>=n)
                {
                    sum=n*p;
                    if(sum<max)
                    {
                        max=sum;
                    }
                }
            }
        }
        if(max<=b)
        {
            printf("%lld\n",max);
        }
        else
        {
            printf("stay home\n");
        }
    }
    return 0;
    // Event Planning
}

