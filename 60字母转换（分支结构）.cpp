#include<stdio.h>

 int main()

 {

     char a,b;

     while(scanf("%c",&a)!=EOF)

     {

         b=getchar();

         if(a>='a'&&a<='z')

             printf("%c\n",a-32);

        else
             printf("%c\n",a);
     }
 }
