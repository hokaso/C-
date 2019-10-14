#include<bits/stdc++.h>
using namespace std;
#define Max_Node 101
#define Max_INF 10001

typedef struct
{
    int StartNode,EndNode,weight;
}EdgeSet;

EdgeSet value[Max_INF];


bool fun(EdgeSet a,EdgeSet b)
{
    return a.weight<b.weight;
}


int BK(int f[],int p)
{
    while(f[p]>=0)
        p=f[p];
    return p;
}


int main()
{
    int n;
    scanf("%d",&n);
    int _weight,i,j,k,right,left,AdjMatrix[Max_Node],Visited[101],sum=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&_weight);
            if(j>i)
            {
                value[k].weight=_weight;
                value[k].StartNode=i;
                value[k].EndNode=j;
                k++;
            }
        }

    sort(value,value+k,fun);
    for(i=0;i<n;i++)
        Visited[i]=-1;

    i=0,j=0;
    while(j<n-1&&i<k)
    {
        right=BK(Visited,value[i].StartNode);
        left=BK(Visited,value[i].EndNode);
        if(right!=left)
        {
            Visited[left]=right;
            AdjMatrix[j]=value[i].weight;
            sum+=AdjMatrix[j];
            j++;

        }
        i++;
    }
    printf("%d\n",sum);
}
