#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int n;
int a[16];

int flag()
{
    int i,j=0;
    for(i=1;i<=n;i++)
        if(a[i]!=0)
            j++;

    return j;
}

void print()
{
    int i,w=0;

    for(i=1;i<=n;i++)
        if(a[i]!=0)
        {
            w++;
        }
        printf("%d",w);
    for(i=1;i<=n;i++)
        if(a[i]!=0)
        {
            printf(" %d",i);
        }


    printf("\n");
}

void ZJ(int l,int k)
{
    int i;
    if(l>n||flag()>=k)
        return;
    a[l]=1;
    if(flag()==k)
        print();
    else
        ZJ(l+1,k);
    a[l]=0;
    ZJ(l+1,k);
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
    memset(a,0,sizeof(a));
    int i,j,x=0;
    printf("%d\n",0);
    while(x!=n)
    {
    x++;
    ZJ(1,x);
    }
    printf("\n");
    }

}
