#include<stdio.h>
int main()
{
    long n,q,a[100000],b[100000],i,j,k,l,temp,ck,ca=0;;
    while(scanf("%ld%ld",&n,&q)==2)
    {
        if(n==0 && q==0) break;
        ck=0;
        for(i=1; i<=n; i++)
        {
            scanf("%ld",&a[i]);
        }
        for(j=1; j<=q; j++)
        {
            scanf("%ld",&b[j]);
        }
        for(i=1; i<n; i++)
        {
            for(k=i+1; k<=n; k++)
            {
                if(a[i]>a[k])
                {
                    temp=a[i];
                    a[i]=a[k];
                    a[k]=temp;
                }
            }
        }
        printf("CASE# %ld:\n",++ca);
        for(j=1; j<=q; j++)
        {
            ck=0;
            for(i=1; i<=n; i++)
            {
                if(b[j]==a[i])
                {
                    ck=1;
                    break;
                }
            }
            if(ck==1)
            {
                printf("%ld found at %ld\n",b[j],i);
            }
            else
            {
                printf("%ld not found\n",b[j]);
            }
        }
    }
    return 0;
}

// Where is the Marble