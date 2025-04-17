#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,m;
    while(cin>>n>>m)
    {
        if(n<=m)
        {
            cout<<m-n<<endl;
        }
        else if(n>m)
        {
            cout<<n-m<<endl;
        }
    }
    return 0;
}

// Hashmat the Brave Warrior