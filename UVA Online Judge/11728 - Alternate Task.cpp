#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,j,k,p=1,q,r,s;
    while(cin>>n){
            if(n==0){
                break;
            }
        else if(n==1){
            cout<<"Case "<<p<<": 1"<<endl;
            p++;
        }
        else{
                r=0;
            for(i=n-1;i>=sqrt(n);i--){
                    k=i;
                    s=0;
                for(j=1;j<=k;j++){
                    if(k%j==0){
                        s=s+j;
                    }
                }
            if(s==n){
                cout<<"Case "<<p<<": "<<i<<endl;
                p++;
                r=1;
                break;
            }
            }
            if(r==0){
            cout<<"Case "<<p<<": -1"<<endl;
            p++;
            }
        }
    }
    return 0;
}
// Alternate Task
