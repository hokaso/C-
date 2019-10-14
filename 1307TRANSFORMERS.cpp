#include<stdio.h>
#define N 10
#define R 7
void transformer(int n);
int main()
{
    int i,a[N];
    long n;
    while(scanf("%d",&n)!=EOF)
    {
        transformer(n);
    }


}

void transformer(int n)

{
    int i,a[N];
    for(i=0;n>R-1;i++)
    {
            a[i]=n%R;
            n/=R;
    }
    a[i]=n;
    while(i>=0)
    {
        printf("%d",a[i]);
        i--;
    }

    printf("\n");
}
