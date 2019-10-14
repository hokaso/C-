#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[1001],b[1001],i,j,l,n;
    while(scanf("%d",&n),n)
    {
        while(scanf("%d",&b[0]),b[0])
        {
            for(j=1;j<n;j++)
                scanf("%d",&b[j]);
            i=1;j=0;l=0;
            for(;i<=n&&j<n;i++)
            {
                a[l]=i;
                while(a[l]==b[j])
                {
                    if(l<=0)
                    {
                        a[l]=0;
                        l--;
                    }

                    else
                        l--;
                    j++;
                    if(l==-1)
                        break;
                }
                l++;
            }
            if(j!=n)printf("No\n");
            else printf("Yes\n");
        }
        printf("\n");
    }
}
