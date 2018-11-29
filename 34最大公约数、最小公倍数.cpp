#include <stdio.h>

 int main()

 {

 long a,b,u,v,r,t;

 while(scanf("%ld %ld",&a,&b)!=EOF)

 {

 if(a!=-1&&b!=-1){

     v=a;

 u=b;

 while(v!=0)

 {

 r=u%v;

 u=v;

 v=r;

 }

 t=a*b/u;

 printf("%ld %ld\n",u,t);

 }

 else

     break;

 }

 }
