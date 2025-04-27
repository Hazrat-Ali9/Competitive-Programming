#include<stdio.h>
int main()
{
    int n,k,p,r,sum;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        sum=0;
        if(k>1)
        {
            p=n;
            while(p>=k)
            {
                r=p%k;
                p=p/k;
                sum=sum+p;
                p=r+p;
            }
        }
        printf("%d\n",n+sum);
    }
    return 0;
}

// Peter's Smokes