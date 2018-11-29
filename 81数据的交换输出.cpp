#include<stdio.h>
int main()
{
    int a,b,i,n,min;
    int ch[101];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ch[i]);
        }
        min=0;
        for(i=1;i<n;i++)
            if(ch[i]<ch[min])
            min=i;
        a=ch[min];
        ch[min]=ch[0];
        ch[0]=a;
        for(i=0;i<n;i++)
            printf("%d ",ch[i]);
        printf("\n");
    }
}
