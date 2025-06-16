#include<iostream>
#include<string.h>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
    char str[1000002],s1[10],s2[10],ch[128];
    int i,j,k,p,q,r,s,n,m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",str);
        scanf("%d",&m);
        for(i=0; i<128; i++)
            ch[i]=i;
        for(i=0; i<m; i+=1)
        {
            scanf("%s %s",s1,s2);
            for(j='A'; j<='Z'; j+=1)
            {
                if(ch[j]==s2[0])
                {
                    ch[j]=s1[0];
                }
            }
        }
        for(i=0; str[i]; i+=1)
        {
            printf("%c",ch[str[i]]);
        }
        printf("\n");
    }
    return 0;
}
// Decoding Baby Boss
