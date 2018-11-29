#include<stdio.h>
int main(void)
 {
         int a,b,x=0,y=0;
    while(scanf("%d",&a)!=0)
    {
        if(a==0)
            break;
        else if(a%7==0)
            printf("YES\n");
        else
                    {
             while(a!=0)
             {
                 if(a%10==7)
                 {
                     x++;
                }
                a=a/10;
            }
            if(x==0)
            printf("NO\n");
            else
            printf("YES\n");
        x=0;
        }
    }
     }
