#include<stdio.h>  

#define PI 3.1415927

int main()  

{  

    double r,s;  

     while(scanf("%lf",&r)!=EOF)
    {  

         s=PI*r*r;  

         printf("%.2f\n",s);  

     } 
} 
