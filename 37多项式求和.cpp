#include<stdio.h>
int main()
{
    int i,n,p,q,d;
    double a,b;
    scanf("%d",&n);
    for(i=0;n>i;n--)
    {
        scanf("%d",&p);
        q=1;
        a=1.0;
        b=0;
        d=1;
        while(d<=p)
        {
            a=q*1.0/d;
            b+=a;
            q=-q;
            d=d+1;
        }
        printf("%.8f\n",b);
    }
    return 0;

}
