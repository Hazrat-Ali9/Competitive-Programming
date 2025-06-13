#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,p,m,i,j,ck=0,r;
    while(cin>>n){
            ck=0;
            m=n;
            r=0;
            while(m){
                r=r*10;
                r=(m%10)+r;
                m=m/10;
            }
            for(i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    ck=1;
                    break;
                }
            }
            if(ck==0 && r==n){
                cout<<2*n<<endl;
            break;
            }
            else{
                cout<<2*n<<endl;
            }
    }
}

// Gift From the Gods