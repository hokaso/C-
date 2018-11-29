#include<stdio.h>
int main()
{
    long long a,n,i,j;
    char ch;
    scanf("%lld",&a);
    ch=getchar();
    while(a>0)
    {
        scanf("%lld",&n);
        i=1;
        for(j=0;j<n-1;j++)
        {
            i=2*(1+i);
        }
        printf("%lld\n",i);
    a--;
    }

}
