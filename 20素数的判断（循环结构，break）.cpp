#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d",&b)!=EOF)
    {
       c=sqrt(b);
    for(a=2;a<=c;a++){
        if(b%a==0)
            break;
            }
        if(a>c&&b!=1)
            printf("yes\n");
        else
            printf("no\n");

    }


    }

