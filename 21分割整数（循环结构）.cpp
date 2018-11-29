#include<stdio.h>
int main()
{
    int z;
    z=1;
    int a,b;
    scanf("%d",&a);
    a=b;
    while(b!=0){
        b/=10;
        z*=10;
    }
    while(z!=0){
        a%=z;
        z/=10;
        printf("%d ",a);
        a/=10;
    }
    }
