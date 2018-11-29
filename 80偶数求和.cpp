#include<stdio.h>
int main()
{
    int m,n,i,s,avg,d,sum;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        d=s=0;
        while(n>=m)
        {
            n=n-m;
            for(i=0;i<m;i++)
            {
                d=d+2;
                s=d+s;
                avg=s/m;
            }
            printf("%d",avg);
            if(n>=m)
            printf(" ");
            s=0;
        }
        if(n!=0){
            for(i=0;i<n;i++)
            {
                d=d+2;
                s=d+s;
                avg=s/n;
            }
            printf(" %d",avg);
        }
        else
        {

        }
        printf("\n");
    }
}
