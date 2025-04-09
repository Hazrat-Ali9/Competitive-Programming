#include<stdio.h>
int main()
{
    long long n,d,s,i,sum;
    while(scanf("%lld",&n)==1)
    {
        sum=0;
        d=(n/2)+1;
        s=n*d+(d-1);
        for(i=1; i<=3; i++)
        {
            sum=sum+s;
            s=s-2;
        }
        printf("%lld\n",sum);
    }
    return 0;
}

//Joana and the odd numbers