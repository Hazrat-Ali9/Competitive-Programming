#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
    string str;
    int n,m,i,j,k,p,q,r;
    cin>>n;
    while(n--){
        cin>>str;
        int one=0,two=0,three=0,four=0,five=0,six=0,c=0;
        for(i=0;i<str.length();i++){
            if(str[i]=='M'){
                one++;
            }
            if(str[i]=='A'){
                two++;
            }
            if(str[i]=='R'){
                three++;
            }
            if(str[i]=='G'){
                four++;
            }
            if(str[i]=='I'){
                five++;
            }
            if(str[i]=='T'){
                six++;
            }
        }
        while(1){
            if(one==0 || two==0 || three==0 || four==0 || five==0 || six==0){
                break;
            }
            else if(one<1 || two<3 || three<2 || four<1 || five<1 || six<1){
                    break;
            }
            else{
                one-=1;
                two-=3;
                three-=2;
                four-=1;
                five-=1;
                six-=1;
                c++;
            }
        }
        cout<<c<<endl;
    }
}

// Pizza 