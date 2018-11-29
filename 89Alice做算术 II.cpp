#include<stdio.h>
int main()
{
    int i,a,b,c,n;
    scanf("%d",&i);
    for(n=i;n>0;n--)
    {
        scanf("%d",&a);
        while((c=getchar())!='=')
        {
            scanf("%d",&b);
            switch(c)
            {
                case'+':a+= b;
                break;
                case '-':a-=b;
                break;
                case'*':a*=b;
                break;
                case'/':a/=b;
                break;
            }
        }
        printf("%d\n", a);
    }
}
