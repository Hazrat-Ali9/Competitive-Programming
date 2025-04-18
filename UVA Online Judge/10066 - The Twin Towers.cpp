#include<iostream>
using namespace std;
int lcs[1021][1021];
int main()
{
    int arr1[200],arr2[200];
    int i,a,b,c,d,n,k=1,j,q;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            for(i=0; i<a; i++)
            {
                cin>>arr1[i];
            }
            for(j=0; j<b; j++)
            {
                cin>>arr2[j];
            }
            for(i=0; i<a; i++)
            {
                lcs[0][i]=0;
            }
            for(j=0; j<b; j++)
            {
                lcs[j][0]=0;
            }
            for(j=0; j<b; j++)
            {
                for(i=0; i<a; i++)
                {
                    if(arr2[j]==arr1[i])
                    {
                        lcs[j+1][i+1]=(lcs[j][i])+1;
                    }
                    else
                    {
                        lcs[j+1][i+1]=max(lcs[j+1][i],lcs[j][i+1]);
                    }
                }
            }
            cout<<"Twin Towers #"<<k<<endl;
            k++;
            cout<<"Number of Tiles : "<<lcs[j][i]<<endl<<endl;
        }
    }
    return 0;
}

// The Twin Towers