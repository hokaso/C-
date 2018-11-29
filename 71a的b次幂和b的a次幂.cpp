#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,i;
    double x,y;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        x=pow(a,b);
        y=pow(b,a);
        if(x>y)
            printf("%d\n",a);
        else
            printf("%d\n",b);
    }
}
