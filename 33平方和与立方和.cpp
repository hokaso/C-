#include<stdio.h>

 int main()

 {

     long long m,n,c,d,i,s1,s2;

     while(scanf("%lld %lld",&m,&n)!=EOF)

     {

         d=c=0;s1=s2=0;

         if(n>=m){

             for(;m<=n;m++){

             if(m%2==0){

             c=m;
             s1=c*c+s1;

             }



             else{

             d=m;

             s2=d*d*d+s2;

             }

         }
    printf("%lld %lld\n",s1,s2);

         }

         else{

             for(;n<=m;n++){

             if(n%2==0){

             c=n;

             s1=c*c+s1;

             }



             else{

             d=n;

             s2=d*d*d+s2;

             }

         }

     printf("%lld %lld\n",s1,s2);

         }



     }

     return 0;

 }
