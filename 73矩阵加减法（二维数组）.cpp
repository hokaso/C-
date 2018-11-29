#include<stdio.h>
int main()
{
    int m,n,i,j;
    char ch,ch1;
    while(scanf("%d %d %c",&m,&n,&ch)!=EOF)
    {
        ch1=getchar();
        int a[m][n],b[m][n];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
        if(ch==45)
        {
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                a[i][j]=a[i][j]-b[i][j];
                printf("%d",a[i][j]);
                if(j==n-1)
                break;
                printf(" ");
                }
                printf("\n");
                }
        }
        else if(ch==43)
        {
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                a[i][j]=a[i][j]+b[i][j];
                printf("%d",a[i][j]);
                if(j==n-1)
                break;
                printf(" ");
                }
                printf("\n");
                }
        }
}
}
