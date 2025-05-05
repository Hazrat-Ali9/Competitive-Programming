#include<stdio.h>
int main()
{
    int n,a[100000],i,j,k,sum;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        i=0;
        k=0;
        sum=0;
        while(n>0)
        {
            a[i]=n%2;
            i++;
            k++;
            n=n/2;
        }
        printf("The parity of ");
        for(j=i-1; j>=0; j--)
        {
            printf("%d",a[j]);
        }
        for(i=0; i<k; i++)
        {
            sum=sum+a[i];
        }
        printf(" is %d (mod 2).\n",sum);
    }
    return 0;
}

// Parity 