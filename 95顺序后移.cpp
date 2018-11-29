#include<stdio.h>
int main()
{
    int a,b,c,n,m,i;
    while(scanf("%d%d",&n,&m),m+n)
    {
        int w[n],u[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&w[i]);
        }
        if(m<=n){
        for(i=0;i+m<n;i++)
        {
            u[i+m]=w[i];
        }
        for(i=0;i<m;i++)
        {
            u[i]=w[n-m+i];
        }
        }
        else
        {
            m=m%n;
                    for(i=0;i+m<n;i++)
        {
            u[i+m]=w[i];
        }
        for(i=0;i<m;i++)
        {
            u[i]=w[n-m+i];
        }
        }
        for(i=0;i<n;i++){
            printf("%d",u[i]);
            if(i<n-1)
                printf(" ");}
        printf("\n");
    }
}
