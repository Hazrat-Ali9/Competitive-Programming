#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	long long int n;
	while(cin>>n) {
		if(n<0){
            break;
        }else{
            cout<<((n*(n+1))/2)+1<<endl;
        }
	}
	return 0;
}

//Pizza Cutting