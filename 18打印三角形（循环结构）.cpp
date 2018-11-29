#include<stdio.h>
int main()
{
    int i,j,k,n;
while(scanf("%d",&n)&&n!=-1){
      for(i=0;i<n;i++){
          for(k=0;k<=n-i-2;k++)printf(" ");
          printf("*");
          for(j=0;j<=i-1;j++)printf(" %c",'*');

          printf("\n");
}
printf("\n");
      }
      return 0;
}
