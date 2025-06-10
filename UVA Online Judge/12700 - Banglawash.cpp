#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int n,i,j,k,p,q,r=1;
    cin>>n;
    while(n--){
        cin>>k;
        for(i=0;i<k;i++){
            cin>>str[i];
        }
        int b=0,w=0,d=0,a=0,t=0;
        for(i=0;i<k;i++){
                if(str[i]=='B'){
                    b++;
                }
                else if(str[i]=='W'){
                    w++;
                }
                else if(str[i]=='D'){
                    d++;
                }
                else if(str[i]=='A'){
                    a++;
                }
                else if(str[i]=='T'){
                    t++;
                }
        }
        if((b<k && w==0 && b!=w && t==0) || b==k){
            cout<<"Case "<<r<<": BANGLAWASH"<<endl;
            r++;
        }
        else if((w<k && b==0 && w!=b && t==0) || w==k){
            cout<<"Case "<<r<<": WHITEWASH"<<endl;
            r++;
        }
        else if(b>w){
            cout<<"Case "<<r<<": BANGLADESH "<<b<<" - "<<w<<endl;
            r++;
        }
        else if(b<w){
            cout<<"Case "<<r<<": WWW "<<w<<" - "<<b<<endl;
            r++;
        }
        else if(a==k){
            cout<<"Case "<<r<<": ABANDONED"<<endl;
            r++;
        }
        else if(b==w){
            cout<<"Case "<<r<<": DRAW "<<b<<" "<<t<<endl;
            r++;
        }
    }
    return 0;
}

// Banglawash