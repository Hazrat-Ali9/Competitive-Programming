#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int tcase,cas=0,n,i,j,count,flag;
    int win,lose,draw;
    char ch,enter;
    char array[510];
    scanf("%d",&tcase);
    while(tcase-- && ++cas)
    {
        scanf("%d",&n);
        count=0,flag=0;
        for(i=0; i<n; i++)
        {
            scanf(" %c",&array[i]);
        }
        lose=0;
        printf("Case %d: ",cas);
        for(i=0; i<n; i++)
        {
            if(array[i]!='W')
            {
                count++;
                if(count==3)
                {
                    printf("%d\n",i+1);
                    flag=1;
                    break;
                }


            }
            else if(array[i]=='W')
            {
                count=0;
            }
        }
        if(count<3)
        {
            printf("Yay! Mighty Rafa persists!\n");
            continue;
        }
        if(count>=3 && flag==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

// Keep Rafa at Cheisea
