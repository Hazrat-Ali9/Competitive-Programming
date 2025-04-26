#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,l1,l2,count,count1;
    char s1[100000],s2[100000];
    while(scanf("%s %s",&s1,&s2)==2)
    {
        count1=0;
        k=0;
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0; i<l1; i++)
        {
            for(j=k; j<l2; j++)
            {
                if(s1[i]==s2[j])
                {
                    count1++;
                    k=j+1;
                    break;
                }
            }
        }
        if(count1==l1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

// All in All 
