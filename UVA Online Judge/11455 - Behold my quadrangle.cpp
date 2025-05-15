#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,a,b,c,d,n;
    cin>>n;
    while(n--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int z=max(a,b);
        int s=max(z,c);
        int r=max(s,d);
        if(r<a+b+c && r<a+b+d && r<a+c+d && r<b+c+d)
        {
            printf("quadrangle\n");
        }
        else if(a=b=c=d)
        {
            printf("square\n");
        }
        else if(a==c && b==d)
        {
            printf("rectangle\n");
        }
        else
        {
            printf("banana\n");
        }
    }
    return 0;
}

// Behold my quadrangle