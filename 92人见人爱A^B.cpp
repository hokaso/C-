#include<stdio.h>
int main()
{
    int i,n,b,s;
    while(scanf("%d%d",&n,&b)!=EOF)
    {
        if(n==0&&b==0)
            break;
        s=1;
        for(i=1;i<=b;i++)
            s=(s*n)%1000;
        printf("%d\n",s);
    }
}
