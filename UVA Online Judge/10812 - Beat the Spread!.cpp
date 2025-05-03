#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long t,a,b,r,d;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&a,&b);
        if(a<=b && a!=0 && b!=0){
            printf("impossible\n");
            continue;
        }

        r=(a+b)/2;
        d=r-(b);
        if((r+d)==a && (r-d)==b){
        printf("%lld %lld\n",r,d);
        }
        else{
            printf("impossible\n");
        }
    }
    return 0;
}

// Best the spread