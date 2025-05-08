#include<stdio.h>
int main()
{
    long long n,b[100000],i,j,k,m,l,diff;
    while(scanf("%lld",&n)==1)
    {
        int max=2000000;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&b[i]);
        }
        scanf("%lld",&m);
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(b[i]+b[j]==m)
                {
                    diff=b[i]-b[j];
                    if(diff<0)
                    {
                        diff=diff*(-1);
                    }
                    if(diff<max)
                    {
                        max=diff;
                        if(b[i]>b[j])
                        {
                            k=b[j];
                            l=b[i];
                        }
                        else
                        {
                            k=b[i];
                            l=b[j];
                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n",k,l);
        printf("\n");
    }
    return 0;

}
// Exact Sum

