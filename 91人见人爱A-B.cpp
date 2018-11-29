#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int a[101],b[101];
int main()
{
    int n,m,x,i,j,count,f,l;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<m;i++)
            scanf("%d",&b[i]);
        sort(a,a+n);
        count=l=0;
        for(i=0;i<n;i++)
        {
            f=0;
            for(j=0;j<m;j++)
                if(a[i]==b[j])
                {
                    f=1;
                    break;
                }
            if(f==0&&count==0)
            {
                printf("%d",a[i]);
                count++;
            }
            else if(f==0)
            {
                printf(" %d",a[i]);
                count++;
            }
        }
        if(count==0)
            printf("NULL");
        printf("\n");
    }
}
