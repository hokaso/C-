#include<stdio.h>
int main()
{
    unsigned long m,a,b,i,k,s,t,r,sum;
    scanf("%d",&m);
    {
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&a,&b);
        sum=s=0;
        t=a/2;
        for(k=1;k<=t;k++)
        {
            if(a%k==0)
                s=k+s;
        }
        r=b/2;
        for(k=1;k<=r;k++)
        {
            if(b%k==0)
                sum=k+sum;
        }
        if(s==b&&sum==a)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
return 0;
}
