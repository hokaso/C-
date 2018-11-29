#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        b=10+(a-1)*2;
        printf("%d\n",b);
    }
}
