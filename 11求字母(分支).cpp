#include<stdio.h>
int main()
{
    int n;
    char ch,kk;
    while(scanf("%d",&n)!=EOF){
    ch=getchar();
    if(ch=='y')
        kk='a';
    else if(ch=='z')
    kk='b';
    else
    kk=ch+2;
    printf("%c\n",kk);
    }

    return 0;
}
