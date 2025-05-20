#include<iostream>
#include<math.h>
using namespace std;
long long bigmod(long long a,long long b,long long M)
{
    if(b==0)return 1%M;
    if(b%2==0)
    {
        long long x=bigmod(a,b/2,M);
        return ((x*x)%M);
    }
    else
    {
        return (((a%M)*(bigmod(a,b-1,M))))%M;
    }
}
int main()
{
    long long int n,i,j,k,p,q,r=1;
    cin>>n;
    while(n--)
    {
        cin>>p;
        j=p-1;
        if(p==1){
            cout<<"Case #"<<r<<": "<<1<<endl;
            r++;
        }
        else{
        q=bigmod(2,p-1,1000000007);
        cout<<"Case #"<<r<<": "<<(q*p)%1000000007<<endl;
        r++;
        }
    }
}

// Teams
