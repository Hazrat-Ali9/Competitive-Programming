#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,f,s,t,a,c1,c2,c3,arr[3],i,j,temp,total,c=0;
    cin>>n;
    while(n--)
    {
        cin>>f>>s>>t>>a>>c1>>c2>>c3;
        if(f<0 || s<0 || t<0 || a<0 || c1<0 || c2<0 || c3<0) break;
        arr[0]=c1;
        arr[1]=c2;
        arr[2]=c3;
        for(i=0; i<2; i++)
        {
            for(j=i+1; j<=2; j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        total=f+s+t+a+((arr[1]+arr[2])/2);
        if(total>=90)
        {
            printf("Case %d: A\n",++c);
        }
        if(total>=80 && total<90)
        {
            printf("Case %d: B\n",++c);
        }
        if(total>=70 && total<80)
        {
            printf("Case %d: C\n",++c);
        }
        if(total>=60 && total<70)
        {
            printf("Case %d: D\n",++c);
        }
        if(total<60)
        {
            printf("Case %d: F\n",++c);
        }
    }
    return 0;
}

// Automate the Grades