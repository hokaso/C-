#include<stdio.h>
int main()
{
    int a,b,c,d,i,l,m,n;
    int count;
    scanf("%d",&n);
    for(m=0;m<n;m++)
    {
        count=0;
        scanf("%d",&l);
        for(i=0;i<l;i++)
        {
            scanf("%d%d%d%d",&a,&b,&c,&d);
            if(a<60||b<60||c<60||d<60)
                count++;

        }
        printf("%d\n",count);

    }
}
