#include<stdio.h>
#include<string.h>
int main()
{
    char a,b[1025],ch;
    int i,l;
    while(scanf("%c",&a)!=EOF)
    {
        ch=getchar();
        memset(b,0,sizeof(b));
        gets(b);
        l=strlen(b);
        for(i=0;i<l;i++){
        if(a!=b[i])
        printf("%c",b[i]);}
        printf("\n");

    }
}
