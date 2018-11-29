#include<stdio.h>
int main()
{
    int a;
    int factorial(int a);
    scanf("%d",&a);
    printf("%d\n",factorial(a));
    return 1;
}
int factorial(int a)
{
    int b,c=1;
    for(b=2;b<=a;b++)
        c=b*c;
    return c;
}
