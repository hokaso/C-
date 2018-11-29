#include<stdio.h>
#define N 10
main()
{
int n,i,a[N],k=0;
scanf("%d",&n);
for(i=n;i>0;i/=10)
{
a[k++]=i%10;
}
for(i=k-1;i>=0;i--)
printf("%d ",a[i]);
}
