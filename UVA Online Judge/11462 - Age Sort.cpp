#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int arr[2000000],i,j,k,l,p,n;
    while(cin>>n)
    {
        if(n==0)break;
        else
        {
            for(i=0; i<n; i++)
            {
                cin>>arr[i];
            }
            sort(arr,arr+i);
            for(i=0; i<n; i++)
            {
                cout<<arr[i];
                if(i<n-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
// Age Sort