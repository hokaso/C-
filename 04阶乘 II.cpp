 #include<stdio.h>

 int main()

 {

     int a;

     int factorial(int a);

     while(scanf("%d",&a)==1)

     {

     //scanf("%d",&a);

     printf("%d\n",factorial(a));

     }

     return 0;

 }

 int factorial(int a)

 {

     int b,c=1;

     for(b=2;b<=a;b++)

         c=b*c;
     //printf("%d\n",c);

     return c;

 }


