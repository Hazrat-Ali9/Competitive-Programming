#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<cstdio>
using namespace std;
bool str_cmp(char a, char b){
	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}

int main()
{
    string str;
    int n,i,j,k,p,q,r,s,m;
    cin>>n;
    while(n--){
        cin>>str;
        sort(str.begin(),str.end(),str_cmp);
        do{
            cout<<str<<endl;
        }while(next_permutation(str.begin(),str.end(),str_cmp));
        cout<<endl;
    }
}

// Generating Fast