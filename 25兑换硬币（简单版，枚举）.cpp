#include <stdio.h>
int main(void)
{
    int onefen,twofen,fivefen,n,c;
    while(scanf("%d",&n)==1){
        c=0;
        for(onefen=1;onefen<=n;onefen++)
            for(twofen=1;twofen<=n;twofen++)
                for(fivefen=1;fivefen<=n;fivefen++)
                    if(onefen+twofen*2+fivefen*5==n){
                    c+=1;
                }

    printf("%d\n",c);
    }

}
