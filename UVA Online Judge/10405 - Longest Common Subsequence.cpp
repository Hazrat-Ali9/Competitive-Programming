#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<cstdio>
using namespace std;
int dp[1024][1024];
int main()
{
    string s1,s2;
    int i,j,k,p,q,r;
    while(getline(cin,s1,'\n'))
    {
        getline(cin,s2,'\n');
        for(i=0; i<s1.length(); i++)
        {
            dp[0][i]=0;
        }
        for(j=0; j<s2.length(); j++)
        {
            dp[j][0]=0;
        }
        for(j=0; j<s2.length(); j++)
        {
            for(i=0; i<s1.length(); i++)
            {
                if(s1[i]==s2[j])
                {
                    dp[j+1][i+1]=(dp[j][i])+1;
                }
                else if(s1[i]!=s2[j] && dp[j+1][i]>=dp[j][i+1])
                {
                    dp[j+1][i+1]=(dp[j+1][i]);
                }
                else
                {
                    dp[j+1][i+1]=(dp[j][i+1]);
                }
            }
        }
        cout<<(dp[j][i])<<endl;
    }
    return 0;
}

// Longest Common Subsequence