#include <stdio.h>
int main()
{
    int n,i;
    int f[55]={1,2,3,4,6};
    for (i=5;i<55;i++)
        f[i]=f[i-3]+f[i-1];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        printf("%d\n", f[n - 1]);
    }
}
