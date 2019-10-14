#include<stdio.h>
int a[100005];

int re(int n)
{
    int i,j;
    i=n;
    while(a[i]!=i)
    {
        i=a[i];
    }
    while(a[n]!=i)
    {
        j=a[n];
        a[n]=i;
        n=j;
    }
    return i;
}


int main()
{
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n;i++)
    {
        a[i]=i;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&j,&k);
        if(re(j)!=re(k))
        {
            a[re(j)]=re(k);
        }
        else;
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&j,&k);
        if(re(j)==re(k))
        {
            printf("y\n");
        }
        else
        {
            printf("n\n");
        }
    }
}
