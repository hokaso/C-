#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    double b,c;
    while(scanf("%d",&a)==1)
    {
        b=pow(0.95,a);
        c=b*100;
        printf("%%%.2f\n",c);
    }
}
