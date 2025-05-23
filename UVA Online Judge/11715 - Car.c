#include<stdio.h>
#include<math.h>
int main()
{
    int n,ca=0;
    double a,b,c,u,v,a1,t,s,u1;
    while(scanf("%d",&n) && n!=0)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        if(n==1)
        {
            u=a;
            v=b;
            t=c;
            a1=(v-u)/t;
            s=((v*v)-(u*u))/(2*a1);
            printf("Case %d: %.3lf %.3lf\n",++ca,s,a1);
        }
        if(n==2)
        {
            u=a;
            v=b;
            a1=c;
            s=((v*v)-(u*u))/(2*a1);
            t=(v-u)/a1;
            printf("Case %d: %.3lf %.3lf\n",++ca,s,t);
        }
        if(n==3)
        {
            u=a;
            a1=b;
            s=c;
            v=pow(((u*u)+(2*a1*s)),.5);
            t=(v-u)/a1;
            printf("Case %d: %.3lf %.3lf\n",++ca,v,t);
        }
        if(n==4)
        {
            v=a;
            a1=b;
            s=c;
            u1=((v*v)-(2*a1*s));
            u=pow(u1,.5);
            t=(v-u)/a1;
            printf("Case %d: %.3lf %.3lf\n",++ca,u,t);
        }
    }
    return 0;
}
// Car
