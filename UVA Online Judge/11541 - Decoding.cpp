#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<iomanip>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    string str;
    char ch;
    int i,j,k,p=0,q,r=1,s,t,m,n;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,str,'\n');
        p=0;
        cout<<"Case "<<r<<": ";
        r++;
        for(i=0; i<str.length(); i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                while(p)
                {
                    cout<<ch;
                    p--;
                }
                ch=str[i];
            }
            else
            {
                p=p*10+(str[i]-48);
            }
        }
        if(p>0)
        {
            while(p)
            {
                cout<<ch;
                p--;
            }
        }
        cout<<endl;
    }
    return 0;
}

// Decording