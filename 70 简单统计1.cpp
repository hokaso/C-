#include<stdio.h>
int main()
{
    int ne,ze,po;
    int n,i;
    double a;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        ne=ze=po=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lf",&a);
            if(a>0)
                po++;
            else if(a==0)
                ze++;
            else
                ne++;
        }
        printf("%d %d %d\n",ne,ze,po);
    }
    return 0;
}
