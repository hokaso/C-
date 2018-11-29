#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,m,q;
    char ch;
    scanf("%d",&m);
    int a[m][m],b[m][m],c[m][m],x[m][m],y[m][m];
    ch=getchar();
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d",&x[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d",&y[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            a[i][j]=x[j][i];
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            b[i][j]=y[j][i];
    memset(c,0,sizeof(c));
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            for(q=1;q<m;q++)
                c[i][j]=c[i][j]+a[i][q]*b[q][j];
    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
            printf("%d ",c[i][j]);
            printf("\n");
}
}
