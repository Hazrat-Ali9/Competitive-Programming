#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    int arr[1000],i,j,k,p,q,r;
    while(cin>>p>>q){
        memset(arr,0,sizeof(arr));
        for(i=1;i<=q;i++){
            cin>>k;
            arr[k]=1;
        }
        if(p==q){
                cout<<"*"<<endl;
            }
            else{
        for(j=1;j<=p;j++){
            if(arr[j]==0){
                cout<<j<<" ";
            }
        }
      cout<<endl;
    }
    }
}

// Dangerous Dive