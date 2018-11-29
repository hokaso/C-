#include<stdio.h>
#include<math.h>
int main()
{
    double x,n,i,a,b,c,sum;
    while(scanf("%lf%lf",&x,&n)!=EOF)
    {
        sum=0;
        a=b=1;
        for(i=1;i<=n;i++)
        {
            c=pow(x,i);
            c=c*a;
            sum+=c;
            a=-a;

        }
        printf("%.f\n",sum);
    }
    return 0;
}
