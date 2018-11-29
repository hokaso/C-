#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,k;
    int ch[80][80];
    int sum[80];
    char sh;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        if(n==0&&m==0)
            break;
        sh=getchar();
        memset(sum,0,sizeof(sum));
        for(k=0;k<m;k++)
            for(i=0;i<n;i++)
                scanf("%d",&ch[i][k]);
        for(k=0;k<n;k++)
            for(i=0;i<m;i++)
                sum[k]=ch[k][i]+sum[k];
        for(i=0;i<n;i++)
            {
            printf("%d",sum[i]);
            if(i<n-1)
                printf(" ");
            }
        printf("\n");
    }
}
