#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t,l,a[101],a1[101],i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        if(l<5) break;
        for(i=0; i<l; i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0; j<l; j++)
        {
            scanf("%d",&a1[j]);
        }
        for(i=0; i<l; i++)
        {
            if(a[i]==2 && a1[i]==1)
            {
                printf("a");
            }
            if(a[i]==2 && a1[i]==2)
            {
                printf("b");
            }
            if(a[i]==2 && a1[i]==3)
            {
                printf("c");
            }
            if(a[i]==3 && a1[i]==1)
            {
                printf("d");
            }
            if(a[i]==3 && a1[i]==2)
            {
                printf("e");
            }
            if(a[i]==3 && a1[i]==3)
            {
                printf("f");
            }
            if(a[i]==4 && a1[i]==1)
            {
                printf("g");
            }
            if(a[i]==4 && a1[i]==2)
            {
                printf("h");
            }
            if(a[i]==4 && a1[i]==3)
            {
                printf("i");
            }
            if(a[i]==5 && a1[i]==1)
            {
                printf("j");
            }
            if(a[i]==5 && a1[i]==2)
            {
                printf("k");
            }
            if(a[i]==5 && a1[i]==3)
            {
                printf("l");
            }
            if(a[i]==6 && a1[i]==1)
            {
                printf("m");
            }
            if(a[i]==6 && a1[i]==2)
            {
                printf("n");
            }
            if(a[i]==6 && a1[i]==3)
            {
                printf("o");
            }
            if(a[i]==7 && a1[i]==1)
            {
                printf("p");
            }
            if(a[i]==7 && a1[i]==2)
            {
                printf("q");
            }
            if(a[i]==7 && a1[i]==3)
            {
                printf("r");
            }
            if(a[i]==7 && a1[i]==4)
            {
                printf("s");
            }
            if(a[i]==8 && a1[i]==1)
            {
                printf("t");
            }
            if(a[i]==8 && a1[i]==2)
            {
                printf("u");
            }
            if(a[i]==8 && a1[i]==3)
            {
                printf("v");
            }
            if(a[i]==9 && a1[i]==1)
            {
                printf("w");
            }
            if(a[i]==9 && a1[i]==2)
            {
                printf("x");
            }
            if(a[i]==9 && a1[i]==3)
            {
                printf("y");
            }
            if(a[i]==9 && a1[i]==4)
            {
                printf("z");
            }
            if(a[i]==0 && a1[i]==1)
            {
                printf(" ");
            }
            if(a[i]==1 && a1[i]==1)
            {
                printf(".");
            }
            if(a[i]==1 && a1[i]==2)
            {
                printf(",");
            }
            if(a[i]==1 && a1[i]==3)
            {
                printf("?");
            }
            if(a[i]==1 && a1[i]==4)
            {
                printf("\"");
            }
        }
        printf("\n");
    }
    return 0;
}
// Mobile SMS
