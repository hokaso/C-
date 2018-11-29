#include<stdio.h>
int main(void)
{
    int a1,a2,a3,b1,b2,b3;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
    a1+=b1;
    a2+=b2;
    a3+=b3;
    a2+=a3/60;
    a3%=60;
    a1+=a2/60;
    a2%=60;
    printf("%d %d %d\n",a1,a2,a3);
    }
    //system
    return 0;
}
