#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
long arr[10000];
long new1[10000];
int main()
{
    unsigned long long a,b,d,e,i,j,k,r,p,q,c,s,g;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            p=max(a,b);
            q=0,c=0,d=b,g=0,e=a;
            while(p)
            {
                p/=10;
                q++;
            }
            for(i=1; i<=q; i++)
            {
                r=a%10;
                s=b%10;
                a/=10;
                b/=10;
                k=r+s+g;
                if(k>9)
                {
                    c++;
                    g=1;
                }
                else
                {
                    g=0;
                }
            }
            if(c==0)
            {
                cout<<"No carry operation."<<endl;
            }
            else if(c==1)
            {
                cout<<c<<" carry operation."<<endl;
            }
            else
            {
                cout<<c<<" carry operations."<<endl;
            }
        }
    }
    return 0;
}
// Primary Arithmetic