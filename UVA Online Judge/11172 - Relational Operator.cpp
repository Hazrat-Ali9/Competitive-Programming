#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>n;
    while(n--){
    cin>>a>>b;
    if(a>b){
            cout<<">"<<endl;
        }
    if(a<b){
            cout<<"<"<<endl;
        }
    if(a==b){
        cout<<"="<<endl;
    }
    }
}
// Relation Operator