#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==-1)
        break;
        int a[n+1][n+1];
        memset(a,0,sizeof(a));
        int x=0,y=1,i,j,count=0,s=0,c,l;
        if(n%2==1){
            c=n-1;
            count+=1;}
        else
            {c=n;}
            j=n;
for(l=1;l<=(c/2);l++)
{
        for(i=1;i<=j;i++)
        {
            x++;
            a[x][y]=i+s;

        }
        for(i=j+1;i<=2*j-1;i++)
        {
            y++;
            a[x][y]=i+s;
        }
        for(i=2*j;i<=3*j-2;i++)
        {
            x--;
            a[x][y]=i+s;
        }
        for(i=3*j-1;i<=4*j-4;i++)
        {
            y--;
            a[x][y]=i+s;
        }
        s=s+4*j-4;
        j=j-2;
}
if(count==1)
    a[n/2+1][n/2+1]=n*n;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++)
        if(j==n)
        printf("%d",a[j][i]);
        else
        printf("%d ",a[j][i]);
    printf("\n");
}
    printf("\n");
    }
}
