#include<stdio.h>
#include<math.h>
int main()
{
    long i,j,m,n,max,x,y;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int a[m][n];
        max=0;
        x=y=1;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                if(fabs(a[i][j])>fabs(max))
                    {
                        max=a[i][j];
                        y=j+1;
                        x=i+1;
                    }
            }
        }
        printf("%d %d %d\n",x,y,max);
    }
}
