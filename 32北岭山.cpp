#include<stdio.h>
#include<math.h>
int main()
{
    double a1,a2,b1,b2,e,s;
    double c1,c2,d1,d2;
    while(scanf("%lf%lf",&a1,&a2)!=EOF)
          {
    scanf("%lf%lf",&b1,&b2);
    c1=b1-a1;
    e=c1*(a2+b2)/2;
    s=e;
    a2=1;
    while(a2!=0)
    {
    scanf("%lf%lf",&a1,&a2);
    c1=fabs(b1-a1);
    e=c1*(a2+b2)/2;
    s=s+e;
    b1=a1;
    b2=a2;
    }
        printf("%.1lf\n",s);
          }

    return 0;
}
