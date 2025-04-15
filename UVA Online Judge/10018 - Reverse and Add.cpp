#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,t,i,j,k,p,q,r,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=n;
        q=0;
        while(1)
        {
            r=0;
            while(n)
            {
                r*=10;
                r+=(n%10);
                n/=10;
            }
            if(r==p)
            {
                break;
            }
            else
            {
                n=r+p;
                p=n;
                q++;
            }
        }
        cout<<q<<" "<<p<<endl;
    }
    return 0;
}
// Reverse And Add