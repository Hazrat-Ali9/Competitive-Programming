#include<iostream>
#include<string.h>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t,i,j,k,l,l2,count,cout,ca=0;;
    char s[100000],b[100000];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        count=0;
        cout=0;
        k=0;
        gets(s);
        gets(b);
        l=strlen(s);
        l2=strlen(b);
        if(l==0 || l2==0)
        {
            continue;
        }
        for(i=0; i<l2; i++)
        {
            for(j=k; j<l; j++)
            {
                if(b[i]==s[j])
                {
                    count++;
                    k=j+1;
                    break;
                }
            }
        }
        for(i=0; i<l; i++)
        {
            if(s[i]==' ')
            {
                cout++;
            }
        }
        if(count==l2 && l2==l)
        {
            printf("Case %d: Yes\n",++ca);
        }
        else if(count==l2 && l==l2+cout)
        {
            printf("Case %d: Output Format Error\n",++ca);
        }
        else if(count!=l2 || l>l2)
        {
            printf("Case %d: Wrong Answer\n",++ca);
        }
    }
    return 0;
}

// Big Number of Terms will solve this