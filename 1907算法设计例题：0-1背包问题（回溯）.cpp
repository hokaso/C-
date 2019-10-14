#include<bits/stdc++.h>
using namespace std;
#define INF_V 1001
#define INF_W 101

int main()
{
    int N,i,j,max[INF_W][INF_V],n,CC,weight[INF_W],value[INF_V],l;
    scanf("%d",&N);
    for(l=0;l<N;l++)
    {
        scanf("%d %d",&n,&CC);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&weight[i],&value[i]);
        }
        for(i=0;i<n;i++)
        {
            max[i][0]=0;
        }
        for(j=1;j<=CC;j++)
        {
            if(weight[0]>j)
                max[0][j] =0;
            else
                max[0][j]=value[0];
        }
        for(i=1;i<n;i++)
        {
            for(j=1;j<=CC;j++)
            {
                max[i][j] = max[i-1][j];
                int flag=value[i]+max[i-1][j-weight[i]];
                if(j>=weight[i]&& flag>max[i][j])
                    max[i][j]=flag;
            }
        }
        printf("%d\n",max[i-1][j-1]);
    }
}
