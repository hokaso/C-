#include<stdio.h>

 int main()
{

     long long a,b,c,d,e;
    while(scanf("%lld",&a)!=EOF)

     {

         if(a==0)

         {

         printf("1 0\n");

         }
         else

         {

         b=a;

         e=0;

         while(b!=0)
         {

             b/=10;

             e+=1;

         }

         c=a%3;

         printf("%lld %lld\n",e,c);

        }

  }
 }
