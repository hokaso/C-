#include<stdio.h>
int main()
{
    char mingzi[11];
    double m,n;
    int i,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        {
            scanf(" %s%lf",&mingzi,&m);
            if(m<=10)
            {
            n=m*4/3;
            }
            else if(m>10&&m<=20)
            {
            n=m*2.5-10.5;
            }
            else
            {
            n=m*3.4-5;
            }
            printf("%s %.2f\n",mingzi,n);
        }
}
