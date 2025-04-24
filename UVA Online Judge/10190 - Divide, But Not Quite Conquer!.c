#include<stdio.h>
int main()
{
    long long n,m,count,boring,i,a[100000];
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        if(n<2 || m<2 || n<m)
        {
            printf("Boring!\n");
        }
        else
        {
            count=1;
            boring=1;
            a[1]=n;
            i=2;
            while(n>1)
            {
                n=n/m;
                a[i]=n;
                i++;
                count++;
            }
            for(i=1; i<count; i++)
            {
                if(a[i]%m!=0)
                {
                    boring=0;
                    break;
                }
            }
            if(boring==1)
            {
                for(i=1; i<count; i++)
                {
                    printf("%lld ",a[i]);
                }
                printf("1\n");
            }
            if(boring==0)
            {
                printf("Boring!\n");
            }
        }
    }
    return 0;
}

// Divide , But Not Quite Conquert