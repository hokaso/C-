#include<stdio.h>
int main()
{
    int x;
    int i,n,r;
    int a[32769];
    while(scanf("%d%d",&x,&r)==2)
    {
        if(x<0)
        {
            x=-x;
            printf("-");
        }
        if(x==0)
        {
            printf("0");
        }

        i=0;
        for(;x>0;i++)
        {
            a[i]=x%r;
            x=x/r;
        }
        for (n=i-1;n>=0;n--)
        {
            if(a[n]==15)printf("F");
            else if(a[n]==14)printf("E");
            else if(a[n]==13)printf("D");
            else if(a[n]==12)printf("C");
            else if(a[n]==11)printf("B");
            else if(a[n]==10)printf("A");
            else printf("%d",a[n]);
        }
        printf("\n");
    }
}
