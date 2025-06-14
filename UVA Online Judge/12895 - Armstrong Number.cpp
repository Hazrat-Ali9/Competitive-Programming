#include<iostream>
#include<math.h>
#include<string.h>
#include<iomanip>
#include<cstdio>
using namespace std;
int main()
{
    long int i,j,k,p,q,m,r,t,n,s,c;
    double d;
    cin>>t;
    while(t--){
        cin>>n;
        m=n;
        k=n;
        c=0,s=0;
        while(m){
            m/=10;
            c++;
        }
        while(n){
            r=n%10;
            d=pow(r,c);
            n/=10;
            s=s+d;
        }
        if(s==k){
            cout<<"Armstrong"<<endl;
        }
        else{
            cout<<"Not Armstrong"<<endl;
        }
    }
    return 0;
}
// Armstrong Number
