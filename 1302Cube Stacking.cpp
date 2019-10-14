#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#define SIZE 100000
using namespace std;

int F[SIZE];
int CB[SIZE];
int BT[SIZE];

int search(int x)
{
    if(F[x]==-1)
        return x;
    int flag=search(F[x]);
    BT[x]+=BT[F[x]];
    return
        F[x]=flag;
}
void PUT(int u,int v)
{
    int T_1=search(u),T_2=search(v);
    if(T_1!=T_2)
    {
        F[T_1]=T_2;
        BT[T_1]=CB[T_2];
        CB[T_2]+=CB[T_1];
    }
}
int main()
{
    int P;
    int a,b;
    char ch[2];
    while(scanf("%d",&P)==1)
    {
        for(int i=0;i<SIZE;i++)
        {
            F[i]=-1;
            BT[i]=0;
            CB[i]=1;
        }
        while(P--)
        {
            scanf("%s",&ch);
            if(ch[0]=='M')
            {
                scanf("%d%d",&a,&b);
                PUT(a,b);
            }
            else
            {
                scanf("%d",&a);
                search(a);
                printf("%d\n",BT[a]);
            }
        }
    }
    return 0;
}
