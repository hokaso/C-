#include<stdio.h>
int main()
{
    int s,n,i;
    s=n=0;
    while(scanf("%d",&n)!=EOF){
    if(n>0){
         s=0;
         for(i=1;n>=i;i++){
         s=s+i;
         }
         }
    else{
        s=0;
        for(i=1;n<=i;i--){
        s=s+i;
        }
        }
    printf("%d\n",s);
    }
    return 0;
}
