#include<stdio.h>

 #include<math.h>

 int main()

 {

     long n,e;

     double a,b,c,d;

     while(scanf("%ld",&n)!=EOF)

     {


        a=pow(10,n-1);
        b=pow(10,n);
         for(;a<=b;a++)
         {
             e=a;
             d=0;
             while(e!=0){
             c=e%10;
             d=pow(c,n)+d;


             e/=10;
             }
             if(d==a)
             {
             printf("%.0f\n",d);
             }

         }
     }
     return 0;
 }
