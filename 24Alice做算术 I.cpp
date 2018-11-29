#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    while(scanf("%d%c%d=",&a,&ch,&b)!=EOF)
    {
    if(ch=='+'&&a>=0&&b>=0)
    printf("%d\n",a+b);
    else if(ch=='-'&&a>b)
    printf("%d\n",a-b);
    else if(ch=='*')
    printf("%d\n",a*b);
    else if(ch=='/'&&a!=0&&b!=0)
    printf("%d\n",a/b);
    else if(ch=='%')
    printf("%d\n",a%b);
    else
    printf("Daddy is bad guy\n");
    }
}
