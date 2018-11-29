#include<stdio.h>
#include<math.h>
int main()
{
    int m,i;
    double a,n;
    while(scanf("%lf%d",&n,&m)!=EOF)
    {
        a=0;
        for(i=0;i<m;i++)
        {
            a=a+n;
            n=sqrt(n);
        }
        printf("%.2f\n",a);
    }
}
