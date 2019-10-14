#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n),n)
    {
        int q,p=0;
        q=n*(1+n)/2;
        int a[q],b[q];
        int m[n+1][n+1];
        for(i=0;i<q;i++)
            scanf("%d",&a[i]);
        for(i=0;i<q;i++)
        {
            scanf("%d",&b[i]);
            a[i]+=b[i];
        }

        for(i=1;i<=n;i++)
            for(j=i;j<=n;j++)
        {
            //p=i+(2*n-(j-1))*(j-1)/2-1;
            m[j][i]=a[p++];
            if(i!=j)
            {
                m[i][j]=m[j][i];
            }
        }




        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("%d ",m[i][j]);
            }

            printf("\n");
        }
        printf("\n");



    }
}
