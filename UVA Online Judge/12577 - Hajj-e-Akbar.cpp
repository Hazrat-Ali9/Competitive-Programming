#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int n=1;
    while(cin>>s){
        if(s=="*"){
            break;
        }
        else if(s=="Hajj"){
            cout<<"Case "<<n<<": Hajj-e-Akbar"<<endl;
            n++;
        }
        else if(s=="Umrah"){
            cout<<"Case "<<n<<": Hajj-e-Asghar"<<endl;
            n++;
        }
    }
    return 0;
}
// Hajj e Akbar