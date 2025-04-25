#include<stdio.h>
int main()
{
    long long n,a[15];
    while(scanf("%lld",&n)==1)
    {
        a[8]=40320;
        a[9]=362880;
        a[10]=3628800;
        a[11]=39916800;
        a[12]=479001600;
        a[13]=6227020800;
        if((n<8 && n>=0)|| (n<0 && n%2==0))
        {
            printf("Underflow!\n");
        }
        else if(n>13 ||(n<0 && n%2!=0))
        {
            printf("Overflow!\n");
        }
        else
            printf("%lld\n",a[n]);

    }
    return 0;
}
// Factorial you must be kidding 
