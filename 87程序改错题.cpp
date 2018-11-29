#include<stdio.h>
#define max 100
int a[max][max];
void fun()
{
    int sum=0;
    int i,j;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j)
            sum+=a[i][j];
    printf("%d\n",sum);
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {

        fun();
    }
    return 0;
}
