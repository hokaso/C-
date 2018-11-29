#include<stdio.h>
int main()
{
    int n,x,j,s=0,a[101];
    double pjf=0,sum=0;
    while(scanf("%d",&n)!=EOF)
        {
            sum=0;
            for(x=n;x!=0;x--)
                {
                    scanf("%d",&a[x]);
                }
                for(j=1;j<=n-1;j++)
                {
                    for(x=1;x<=n-j;x++)
                    {
                    if(a[x]>a[x+1])
                    {
                    s=a[x];
                    a[x]=a[x+1];
                    a[x+1]=s;
                    }
                    }
                }
                for(x=2;x<n;x++)
                {
                sum+=a[x];
                }
                pjf=sum/(n-2);
                printf("%.2f\n",pjf);
        }
            return 0;
}
