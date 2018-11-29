#include<stdio.h>
#include<math.h>
int main()
{
    double x,n,m,N,sum,i,y,q,p,f;
    while(scanf("%lf%lf",&x,&n)!=EOF)
    {
    N=pow(10,-n);
    sum=0;
    y=f=1;
    m=1;
    for(i=1;fabs(m)>=N;i+=2)
    {
        y=1;
        for(q=1;q<=i;q++)
        {
            y*=q;
        }
        m=pow(x,i)/y;

        m=m*f;
        sum+=m;

        f=-f;

    }
    printf("%lf\n",sum);
    }

}
