#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,m,p1,p2;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        m=b*b-4*a*c;
        if(m<0)
            printf("none\n");
        if(m==0)
            printf("%.2f\n",-b/(2*a));
        if(m>0)
        {
            p1=(-b-sqrt(m))/(2*a);
            p2=(-b+sqrt(m))/(2*a);
            if(p1>p2)
                printf("%.2f %.2f\n",p2,p1);
            else
                printf("%.2f %.2f\n",p1,p2);
        }
    }
}
