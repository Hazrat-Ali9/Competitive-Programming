#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<cstdio>
#define M 1000000
using namespace std;
bool prime[M];
void primegeneretor()
{
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=4;i<=M;i+=2){
        prime[i]=false;
    }
    for(int i=3;i<=M;i++){
        if(prime[i]==true){
            for(int j=i+i;j<=M;j+=i){
                prime[j]=false;
            }
        }
    }
}
int main()
{
    primegeneretor();
    int i,n,m,j,k,p,q,r;
    while(cin>>n){
        if(n==0){
            break;
        }
        else{
                r=0;
            for(i=2;i<=(n-1);i++){
                if(prime[i]==true && prime[n-i]==true){
                    cout<<n<<":"<<endl<<i<<"+"<<n-i<<endl;
                    r=1;
                    break;
                }
        }
        if(r==0){
                cout<<n<<":"<<endl<<"NO WAY!"<<endl;
        }
    }
    }
}
// The Primary Problem
