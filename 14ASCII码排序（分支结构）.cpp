#include<stdio.h>
int main()
{
    char m,n,l;

    char a,b,c;
    while(scanf(" %c%c%c",&m,&n,&l)!=EOF){
    a=b=c=0;
    if(m<=n&&m<=l){
        a=m;
        if(n>=l)
        b=l,c=n;
        else
        b=n,c=l;
            printf("%c %c %c\n",a,b,c);
    }


    else if(m>=n&&n<=l){
        a=n;
        if(m>=l)
        b=l,c=m;
        else
        b=m,c=l;
            printf("%c %c %c\n",a,b,c);
    }


    else if(m>=l&&l<=n){
        a=l;
        if(m>=n)
        b=n,c=m;
        else
        b=m,c=n;
            printf("%c %c %c\n",a,b,c);
    }

    }

    return 0;
}
