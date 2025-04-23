#include<iostream>
#include<cstdio>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
int dp[1000][1000];
int main()
{
    int n,i,j,p,q,r,arr1[1000],arr2[1000];
    cin>>n;
    while(n--)
    {
        cin>>p;
        for(i=1; i<=p; i++)
        {
            cin>>arr1[i]>>arr2[i];
        }
        int x=0;
        cin>>r;
        while(r--)
        {
            cin>>q;
            for(i=0; i<=p; i++)
            {
                dp[i][0] = 0;
            }
            for(j=0; j<=q; j++)
            {
                dp[0][j] = 0;
            }
            for(i=1; i<=p; i++)
            {
                for(j=1; j<=q; j++)
                {
                    if(arr2[i] > j)
                    {
                        dp[i][j] = dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j] = max(dp[i-1][j], dp[i-1][j-arr2[i]] + arr1[i]);
                    }
                }
            }
            x += dp[p][q];
        }
        cout<<x<<endl;
    }
    return 0;
}

// Super Sale