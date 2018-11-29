#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0){break;}
        int s=0;
        for(i=0;i<n;n--)
        {
            scanf("%d",&a);
            s=s+a/100;
            a=a%100;
            s=s+a/50;
            a=a%50;
            s=s+a/10;
            a=a%10;
            s=s+a/5;
            a=a%5;
            s=s+a/2;
            a=a%2;
            s+=a;
        }
        printf("%d\n",s);
    }
}
