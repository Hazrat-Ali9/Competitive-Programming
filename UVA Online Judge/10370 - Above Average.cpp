#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,s[1000],g[1000],i,j,k;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            float sum=0,avg=0,count=0;
            scanf("%d",&s[i]);
            for(j=0; j<s[i]; j++)
            {
                scanf("%d",&g[j]);
            }
            for(j=0; j<(s[i]); j++)
            {
                sum=((sum+(g[j])));
            }
            avg=(sum/(s[i]));
            for(j=0; j<(s[i]); j++)
            {
                if(avg<g[j])
                {
                    count++;
                }
            }
            printf("%.3f%%\n",((count*100)/s[i]));
        }
    }
    return 0;
}

// Above Average 


