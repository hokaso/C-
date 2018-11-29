#include<stdio.h>

 int main()

 {

     int y,m,a,d;

     int k,le;

     int tab[2][13]=

    {

     {

         0,31,28,31,30,31,30,31,31,30,31,30,31

     },

     {

         0,31,29,31,30,31,30,31,31,30,31,30,31
     }

     };
    while(scanf("%d%d%d",&y,&m,&d)!=EOF)

     {

     le=(y%4==0&&y%100!=0||y%400==0);

     k=m;

     a=d;

     for(k=1;k<m;k++)

         a=a+tab[le][k];

     printf("%d\n",a);

     }



     return 0;

 }
