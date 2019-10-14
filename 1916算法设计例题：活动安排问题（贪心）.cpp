#include<bits/stdc++.h>
using namespace std;
#define INF 1001

typedef struct
{
    int start;
    int end;
}play;

bool rule(play &a,play &b)
{
    return a.end<b.end;
}

int main()
{
    int l,m,i,k,j,count;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        count = 1;
        play time[INF];
        scanf("%d",&m);
        for(j=0;j<m;j++)
            scanf("%d %d",&time[j].start,&time[j].end);

        sort(time,time+m,rule);
        j=0;
        for(k=1;k<m;k++)
        {
            if(time[k].start>= time[j].end)
            {
                count++;
                j=k;
            }
        }
        printf("Case %d: %d\n",i+1,count);
    }
}
