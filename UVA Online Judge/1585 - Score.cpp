#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;
int main()
{
    int j,k,i,p,q,n;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        p=0,q=0;
        for(i=0; i<str.length(); i++)
        {
            if(str[i]=='O')
            {
                p=(p+1);
                q=p+q;
            }
            else if(str[i]=='X')
            {
                p=0;
            }
        }
        cout<<q<<endl;
    }
    return 0;
}

// Score 
