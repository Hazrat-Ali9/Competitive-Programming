#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int a,l,p,sum,c=0;
    while(scanf("%lld%lld",&a,&l)==2)
    {
        sum=1;
        p=a;
        if(a<0 || l<0) break;
        if(a>=l) break;
        while(p!=1)
        {
            if(p%2==0)
            {
                p=p/2;
            }
            else if(p%2!=0)
            {
                p=(3*p)+1;
            }
            if(p<=l)
            {
                sum=sum+1;
            }

            else
            {
                break;
            }
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",++c,a,l,sum);
    }
    return 0;
}

// The Collatz Sequence