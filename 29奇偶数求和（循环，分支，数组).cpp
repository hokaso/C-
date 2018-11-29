#include<stdio.h>

 #include<string.h>
int main()
{

     int n,i,j,o;

     char ch;

     while(scanf("%d",&n)==1)
     {

    ch=getchar();

     if(n==0)

     break;

     int a[n],sum1=0,sum2=0;

             for(i=0;i<n;i++)

                 {scanf("%d",&a[i]);}

                 for(i=0;i<n;i++)
                 {

                 if(a[i]%2==0)

                 {
                     sum2=sum2+a[i];
                }

                 else

                 {

                     sum1=sum1+a[i];

                 }

                 }

     printf("%d %d\n",sum1,sum2);

     for(i=n-1;i>-1;i--)

     {

         printf("%d",a[i]);

         if(i==0)

             break;

         printf(" ");

     }

     printf("\n");

     }

 }
