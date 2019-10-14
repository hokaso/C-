#include<stdio.h>
#define MNode 100

typedef struct
{
    int Matrix[MNode][MNode];//ÁÚ½Ó¾ØÕó
} PG;

typedef struct
{
    int q[MNode];
    int front;
    int rear;
} Quene;

Quene T;

void Create_Graph(PG &g,int n,int e)
{
    int i,j,a,b;
    //int
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
            g.Matrix[i][j]=0;
    }
    for(i=0; i<e; i++)
    {
        scanf("%d%d",&a,&b);
        g.Matrix[a-1][b-1]=1;
    }
}
int flag[MNode]= {0};



void BFS_Search(PG &g,int n)
{
    flag[0]=1;
    while(T.front<=T.rear)
    {
        int w=T.front;
        int j=T.q[w];
        for(int i=0; i<n; i++)
        {
            if(g.Matrix[j][i]==1&&flag[i]==0)
            {
                printf("%d ",i+1);
                flag[i]=1;
                T.rear++;
                int y=T.rear;
                T.q[y]=i;
            }
        }
        T.front++;
    }
}

int main()
{
    int n,e;
    PG g;
    T.front=T.q[0]=T.rear=0;
    scanf("%d%d",&n,&e);
    Create_Graph(g,n,e);
    printf("%d ",T.q[0]+1);
    BFS_Search(g,n);
}
