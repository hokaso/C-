#include<bits/stdc++.h>
#define VX 101
#define Max_INF 100001

typedef struct
{
    int AdjMatrix[VX][VX];
} edgeSet;

int Visited[VX]= {0};

int main()
{
    int n,weight,i,j,k,sum=0,StartNode[VX],EndNode[VX];
    edgeSet value;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            scanf("%d",&weight);
            value.AdjMatrix[i][j]=weight;
        }
    for(i=0; i<n; i++)
    {
        StartNode[i]=value.AdjMatrix[0][i];
        EndNode[i]=0;
    }
    Visited[0]=1;
    for(i=1; i<n; i++)
    {
        int min=Max_INF;
        for(j=1; j<n; j++)
        {
            if(!Visited[j]&&StartNode[j]<min)
            {
                min=StartNode[j];
                k=j;
            }
        }
        Visited[k]=1;
        for(j=1; j<n; j++)
            if(!Visited[j]&&value.AdjMatrix[k][j]<StartNode[j])
            {
                StartNode[j]=value.AdjMatrix[k][j];
                EndNode[j]=k;
            }
    }
    for(i=0; i<n; i++)
        sum+=StartNode[i];
    printf("%d\n",sum);
}
