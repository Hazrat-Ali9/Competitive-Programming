#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,a,b;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %c%d",&a,&ch,&b);
        if(a==1 && b==0)
        {
            printf("11:00\n");
        }
        if(a==1 && (b>0 && b<51))
        {
            printf("10:%d\n",(60-b));
        }
        if(a==1 && (b>50 && b<60))
        {
            printf("10:0%d\n",(60-b));
        }
        if(a==2 && b==0)
        {
            printf("10:00\n");
        }
        if(a==2 && (b>0 && b<51))
        {
            printf("09:%d\n",(60-b));
        }
        if(a==2 && (b>50 && b<60))
        {
            printf("09:0%d\n",(60-b));
        }
        if(a==3 && b==0)
        {
            printf("09:00\n");
        }
        if(a==3 && (b>0 && b<51))
        {
            printf("08:%d\n",(60-b));
        }
        if(a==3 && (b>50 && b<60))
        {
            printf("08:0%d\n",(60-b));
        }
        if(a==4 && b==0)
        {
            printf("08:00\n");
        }
        if(a==4 && (b>0 && b<51))
        {
            printf("07:%d\n",(60-b));
        }
        if(a==4 && (b>50 && b<60))
        {
            printf("07:0%d\n",(60-b));
        }
        if(a==5 && b==0)
        {
            printf("07:00\n");
        }
        if(a==5 && (b>0 && b<51))
        {
            printf("06:%d\n",(60-b));
        }
        if(a==5 && (b>50 && b<60))
        {
            printf("06:0%d\n",(60-b));
        }
        if(a==6 && b==0)
        {
            printf("06:00\n");
        }
        if(a==6 && (b>0 && b<51))
        {
            printf("05:%d\n",(60-b));
        }
        if(a==6 && (b>50 && b<60))
        {
            printf("05:0%d\n",(60-b));
        }
        if(a==7 && b==0)
        {
            printf("05:00\n");
        }
        if(a==7 && (b>0 && b<51))
        {
            printf("04:%d\n",(60-b));
        }
        if(a==7 && (b>50 && b<60))
        {
            printf("04:0%d\n",(60-b));
        }
        if(a==8 && b==0)
        {
            printf("04:00\n");
        }
        if(a==8 && (b>0 && b<51))
        {
            printf("03:%d\n",(60-b));
        }
        if(a==8 && (b>50 && b<60))
        {
            printf("03:0%d\n",(60-b));
        }
        if(a==9 && b==0)
        {
            printf("03:00\n");
        }
        if(a==9 && (b>0 && b<51))
        {
            printf("02:%d\n",(60-b));
        }
        if(a==9 && (b>50 && b<60))
        {
            printf("02:0%d\n",(60-b));
        }
        if(a==10 && b==0)
        {
            printf("02:00\n");
        }
        if(a==10 && (b>0 && b<51))
        {
            printf("01:%d\n",(60-b));
        }
        if(a==10 && (b>50 && b<60))
        {
            printf("01:0%d\n",(60-b));
        }
        if(a==11 && b==0)
        {
            printf("01:00\n");
        }
        if(a==11 && (b>0 && b<51))
        {
            printf("12:%d\n",(60-b));
        }
        if(a==11 && (b>50 && b<60))
        {
            printf("12:0%d\n",(60-b));
        }
        if(a==12 && b==0)
        {
            printf("12:00\n");
        }
        if(a==12 && (b>0 && b<51))
        {
            printf("11:%d\n",(60-b));
        }
        if(a==12 && (b>50 && b<60))
        {
            printf("11:0%d\n",(60-b));
        }
    }
    return 0;
}

// Mirror Clock