#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,b,i,j,k,p,q,r;
    cin>>r;
    while(r--)
    {
        cin>>a>>b;
        q=a,j=b;
        if(a==0)
        {
            cout<<0<<" "<<0<<endl;
        }
        else if(b==0)
        {
            cout<<0<<" "<<0<<endl;
        }
        else if(a==0 && b==0)
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            while(b!=0)
            {
                p=b;
                b=a%b;
                a=p;
            }
            k=(q*j)/a;
            if((k==q || k==j) && (a==q || a==j))
            {
                cout<<a<<" "<<k<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
// GCD LCM 