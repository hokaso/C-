#include<stdio.h>

int main()

{

     long x,y,z;



    while(scanf("%ld",&x)==1){

    z=0;

       while(x!=0){

       y=x%10;
       z=y+z*10;
        x/=10;
     }
     printf("%d\n",z);
    }
}
