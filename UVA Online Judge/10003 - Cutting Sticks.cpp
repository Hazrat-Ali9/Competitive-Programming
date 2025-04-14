#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<cstring>
using namespace std;
int dp[500][500];
vector<int> v;
int fun(int a, int b)
{
    if(b-a==1)
    {
        return 0;
    }
    if(dp[a][b]!=-1)
    {
        return dp[a][b];
    }
    int x=10000000;
    for(int i=a+1; i<b; i++)
    {
        x=min(v[b]-v[a]+fun(a,i)+fun(i,b),x);
        dp[a][b]=x;
    }
    return x;
}
int main()
{

    int t,n,a;
    while(cin>>t)
    {
        if(t==0)
        {
            break;
        }
        else
        {
            cin>>n;
            v.clear();
            v.push_back(0);
            for(int i=0; i<n; i++)
            {
                cin>>a;
                v.push_back(a);
            }
            v.push_back(t);
            memset(dp,-1,sizeof(dp));
            printf("The minimum cutting is %d.\n",fun(0,n+1));
        }
    }
    return 0;
}

// Cutting Sticks