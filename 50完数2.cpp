#include<iostream.h>
int main()
{
int i,j,sum;
for(i=2;i<100;i++)
{
sum=0;
for(j=1;j<=i/2;j++)
if(i%j==0)
sum=sum+j;
if(sum==i)
printf("%d",i);
}
}
