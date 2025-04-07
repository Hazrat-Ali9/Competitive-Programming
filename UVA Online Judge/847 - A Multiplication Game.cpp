#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,m,i,j,k,p,q,r;
    while(scanf("%lld",&n)==1)
    {
        p=1;
        k=0;
        while(p<n)
        {
            if(k%2==1)
            {
                p*=2;
            }
            else
            {
                p*=9;
            }
            k++;
        }
        if(k%2)
        {
            printf("Stan wins.\n");
        }
        else
        {
            printf("Ollie wins.\n");
        }
    }
}
// A Multiplication Game