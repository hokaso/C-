#include<stdio.h>
int main()
{
    int m,n,l,k;
    while(scanf("%d%d%d",&m,&n,&l)!=EOF){
    if(m>=n&&m>=l)
        k=m;
    else if(m<=n&&n>=l)
        k=n;
    else if(m<=l&&l>=n)
        k=l;
    printf("%d\n",k);
    }

    return 0;
}
