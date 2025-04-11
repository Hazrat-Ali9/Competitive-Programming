#include<stdio.h>
int main()
{
    int t,n,i,a[10000],zero,one,two,three,four,five,six,seven,eight,nine,r;
    scanf("%d",&t);
    while(t--)
    {
        zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            a[i]=i;
        }
        for(i=1; i<=n; i++)
        {
            if(a[i]==0)
            {
                zero++;
            }
            if(a[i]==1)
            {
                one++;
            }
            if(a[i]==2)
            {
                two++;
            }
            if(a[i]==3)
            {
                three++;
            }
            if(a[i]==4)
            {
                four++;
            }
            if(a[i]==5)
            {
                five++;
            }
            if(a[i]==6)
            {
                six++;
            }
            if(a[i]==7)
            {
                seven++;
            }
            if(a[i]==8)
            {
                eight++;
            }
            if(a[i]==9)
            {
                nine++;
            }
            if(a[i]>9)
            {
                while(a[i]!=0)
                {
                    r=a[i]%10;
                    a[i]=a[i]/10;

                    if(r==0)
                    {
                        zero++;
                    }
                    if(r==1)
                    {
                        one++;
                    }
                    if(r==2)
                    {
                        two++;
                    }
                    if(r==3)
                    {
                        three++;
                    }
                    if(r==4)
                    {
                        four++;
                    }
                    if(r==5)
                    {
                        five++;
                    }
                    if(r==6)
                    {
                        six++;
                    }
                    if(r==7)
                    {
                        seven++;
                    }
                    if(r==8)
                    {
                        eight++;
                    }
                    if(r==9)
                    {
                        nine++;
                    }

                }

            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",zero,one,two,three,four,five,six,seven,eight,nine);
    }
    return 0;
}

// Digit Counting
