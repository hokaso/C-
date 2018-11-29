#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long a[300][300],b[300][300],m,n,p,i,l,q,c[300][300],s;
    scanf("%ld%ld%ld",&m,&n,&p);
    for(i=0;i<m;i++)
        for(l=0;l<n;l++)
            scanf("%d",&a[i][l]);
    for(i=0;i<n;i++)
        for(l=0;l<p;l++)
            scanf("%d",&b[i][l]);
    memset(c,0,sizeof(c));
    for(i=0;i<m;i++)
    {
        for(l=0;l<p;l++)
        {
            for(q=0;q<n;q++)
            {
                s=a[i][q]*b[q][l];
                c[i][l]=c[i][l]+s;
            }
            printf("%d",c[i][l]);
            if(l<p-1)
                printf(" ");
        }
        printf("\n");
    }
}
