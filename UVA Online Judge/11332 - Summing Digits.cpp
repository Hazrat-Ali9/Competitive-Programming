#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,i,j,k,p=0,q,r;
    while(cin>>n)
    {
        if(n==0)break;
        else if(n<=9 && n>0)
        {
            cout<<n<<endl;
        }
        else
        {
            p=0;
            while(1)
            {
                while(n)
                {
                    r=n%10;
                    n/=10;
                    p+=r;
                }
                if(p<=9 && p>0)
                {
                    cout<<p<<endl;
                    break;
                }
                else
                {
                    n=p;
                    p=0;
                }
            }
        }
    }
    return 0;
}

// Summing Digit