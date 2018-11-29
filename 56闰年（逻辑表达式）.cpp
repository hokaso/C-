#include<stdio.h>
int main()
{
int op;
while(scanf("%d",&op)!=EOF)
{
if(op%400==0)
printf("yes\n");
else if(op%4==0&&op%100!=0){
printf("yes\n");
}
else {printf("no\n",op);}
}

return 0;
}
