#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#define M 100000
using namespace std;
int prime[M];
void sieve()
{
    int i,j;
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(i=4; i<=M; i+=2)
    {
        prime[i]=false;
    }
    for(i=3; i<=M; i++)
    {
        if(prime[i]==true)
        {
            for(j=i+i; j<=M; j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
int main()
{
    sieve();
    string s1;
    int n,i,m,j,k,p,q,r;
    while(cin>>s1)
    {
        if(s1=="0")
        {
            break;
        }
        else
        {
            m=0;
            for(i=0; i<s1.length(); i++)
            {
                k=0;
                for(j=i; j<s1.length(); j++)
                {
                    k=k*10+(s1[j]-'0');
                    if(prime[k]==true)
                    {
                        if(k>m)
                        {
                            m=k;
                        }
                    }
                }
            }
            cout<<m<<endl;
        }
    }
    return 0;
}
// Prime Substring
