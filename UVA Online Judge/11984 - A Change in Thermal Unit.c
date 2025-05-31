#include<stdio.h>
int main()
{
    int t,ca=0;
    double c,d,f,f1,c1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf",&c,&d);
        if(c<0) break;
        f=((9*c)/5)+32;
        f1=f+d;
        c1=(5*(f1-32)/9);
        printf("Case %d: %.2lf\n",++ca,c1);
    }
    return 0;
}

// A Change in Thermal Unit
