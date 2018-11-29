#include<stdio.h>
void avi(int n,char a,char b,char c)
{
    if(n==1)
        printf("%c-->%c\n",a,c);
    else
    {
        avi(n-1,a,c,b);
        printf("%c-->%c\n",a,c);
        avi(n-1,b,a,c);
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    avi(n,'a','b','c');
    printf("\n");
    }
}


