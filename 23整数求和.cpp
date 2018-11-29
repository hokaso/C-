#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    double m,n,i;
    while(scanf("%lf %lf",&a,&b)!=EOF){
    n=m=0;
    for(i=1;i<=b;i++)
    {
        m=m+pow(10,i-1)*a;
        n=n+m;
    }
    printf("%.lf\n",n);
    }

}
