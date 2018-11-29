#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d;
    double x,y;
    while(scanf("%lf%lf%lf%lf",&a,&b,&c,&d)!=EOF)
    {
        y=sqrt(((a-c)*(a-c)+(b-d)*(b-d)));
        printf("%.2f\n",y);
    }
    return 0;
}
