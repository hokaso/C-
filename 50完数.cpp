#include<stdio.h>
int main()
{
    int x,y,sum,i,j;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        if(x==-1&&y==-1){break;}
        if(x>y){i=x;x=y;y=i;}
    for(;x<=y;x++)
        {
        sum=0;
    for(j=1;j<=x/2;j++)
        if(x%j==0)
        sum=sum+j;
    if(sum==x)
        printf("%d ",x);
        }
        printf("\n");
    }
}
