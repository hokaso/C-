#include<stdio.h>
int main()
{
    int a,b,i,n;
    //int w[100000];
    while(scanf("%d%d",&a,&b),a+b)
    {
        int w[a];
        for(i=0;i<a;i++)
            scanf("%d",&w[i]);
        n=0;
        for(i=0;i<a;i++)
            if(w[i]==b)
            {
                printf("%d\n",i+1);
                n=1;
                break;
            }
            if(n==0)
                printf("-1\n");
    }
}
