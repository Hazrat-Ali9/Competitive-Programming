#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int i,j,k,p,q,r;
    while(cin>>str)
    {
        if(str[0]=='0' && str.length()==1)
        {
            break;
        }
        else
        {
            k=0;
            for(i=0; i<str.length(); i++)
            {
                k=(k*10)+(str[i]-48);
                k%=11;
            }
            if(k==0)
            {
                cout<<str<<" is a multiple of 11."<<endl;
            }
            else
            {
                cout<<str<<" is not a multiple of 11."<<endl;
            }
        }
    }
    return 0;
}

// You can say 11

