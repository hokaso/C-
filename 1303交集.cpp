#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,i,j,t,r;
    while(scanf("%d%d",&m,&n),m+n)
    {
        int a[m][n],b[n][m];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                b[j][i]=a[i][j];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                printf("%d ",b[i][j]);
            printf("\n");}
           printf("\n");
    }
}
