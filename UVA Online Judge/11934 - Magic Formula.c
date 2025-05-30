#include<stdio.h>
int main()
{
    long long a,b,c,d,l,f,count,i;
    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l)!=EOF)
    {
        count=0;
        if(a==0&&b==0&&c==0&&d==0)
            break;
        for(i=0; i<=l; i++)
        {
            f=(a*i*i)+(b*i)+c;
            if(f%d==0)
                count++;
        }
        printf("%lld\n",count);
    }
    return 0;
}

// Magic Formula