#include<stdio.h>

 int main()

 {
    int n,t,a,b;

     double s;

     scanf("%d",&a);

     for(b=a;b>0;b--){

         scanf("%d",&t);
           s=0;

       for(n=1;n<=t;n++){

         s=s+n;


      }

       printf("%.0f\n",s);

         }

     }
