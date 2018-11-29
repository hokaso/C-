#include<stdio.h>

 int main()

 {

     int t;

     while(scanf("%d",&t)!=EOF)

     {

         if(t>=90)

             printf("A\n");

        else if(t<90&&t>=80)
         printf("B\n");

         else if(t<80&&t>=70)

         printf("C\n");

         else if(t<70&&t>=60)

         printf("D\n");

         else

         printf("E\n");

     }

 }
