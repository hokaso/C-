#include<stdio.h>
int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF){
        if(m>=n)
        printf("%d\n",m);
    if(m<n)
        printf("%d\n",n);
    }

    return 0;
}
