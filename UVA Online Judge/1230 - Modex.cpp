#include<iostream>
#include<math.h>
using namespace std;
long long bigmod(long long x,long long y,long long z);
int main()
{
    long long int x,y,z,p,q,r,n;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        p=bigmod(x,y,z);
        cout<<p<<endl;
    }
    cin>>r;
    return 0;
}
long long bigmod(long long x,long long y,long long z)
{
    if(y==0)return 1%z;
    else if(y%2==0)
    {
        long long n=(bigmod(x,y/2,z));
        return (n*n)%z;
    }
    else
    {
        return ((x%z)*(bigmod(x,y-1,z)))%z;
    }
}

// Modex 