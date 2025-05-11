#include<stdio.h>

int main()
{
    int a[100000];
    int i=0;
    int n,k;
    while(scanf("%d",&n)==1)
    {
        int i=0;
        if(n<0) break;
        if(n==0)
        {
            printf("0\n");
            continue;
        }
        while(n>0)
        {
            a[i]=n%3;
            i++;
            n=n/3;
        }
        for(k=i-1; k>=0; k--)
        {
            printf("%d",a[k]);
        }
        printf("\n");
    }
    return 0;
}
// Ternary 

