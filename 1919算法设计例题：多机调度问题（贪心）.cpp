#include<bits/stdc++.h>
using namespace std;
#define INF 1001

bool rule(int a,int b)
{
    return a>b;
}

int main()
{
    int TT,l;
    scanf("%d",&TT);
    for(l=1;l<=TT;l++)
    {
        int n,m,i,j,time[INF],line[INF],flag=0,result=0;
        scanf("%d %d",&n,&m);
        for(j=0; j<n; j++)
            scanf("%d",&time[j]);

        if(m==0)
        {
            flag=1;
        }
        else
        {
            sort(time,time+n,rule);
        }

        if(n<=m&&flag!=1)
            result=time[0];
        else if(flag!=1)
        {
            int vertex=time[0],buttom,min=0;
            for(i=0;i<m;i++)
                line[i]=time[i];

            for(i=m;i<n;i++)
            {
                buttom=line[0],min=0;
                for(j=1;j<m;j++)
                    if(buttom>line[j])
                    {
                        buttom=line[j];
                        min=j;
                    }
                line[min]+=time[i];
                if(vertex<line[min])
                    vertex=line[min];
            }
            result=vertex;
        }

        printf("Case %d: %d\n",l,result);
    }
}
