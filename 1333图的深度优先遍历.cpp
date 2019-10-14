#include<stdio.h>
#define MNode 100

typedef struct
{
	int Matrix[MNode][MNode];//ÁÚ½Ó¾ØÕó
}GP;

typedef struct
{
	int s[MNode];
	int top;
}Stack;

Stack G;

void Create_GPH(GP &g,int n,int e)
{
	int i,j;
	int a,b;
	for(j=0;j<n;j++){
		for(i=0;i<n;i++)
			g.Matrix[i][j]=0;
	}
	for(i=0;i<e;i++){
		scanf("%d%d",&a,&b);
		g.Matrix[a-1][b-1]=1;
	}
}

int flag[MNode]={0};



void DFS_Search(GP &g,int j,int n)
{

	while(G.top>=0){
		int k=0;
		for(int i=0;i<n;i++){
			if(g.Matrix[j][i]==1&&flag[i]==0)
				k=i;
		}
		if(!k) {
			G.top--;
			int w=G.top;
			j=G.s[w];
		}
		else{
			printf("%d ",k+1);
			flag[k]=1;
			j=k;
			G.top++;
			int o=G.top;
			G.s[o]=k;
		}
	}

}

int main()
{
	int n,e;
	GP g;
	G.top=G.s[0]=0;
	scanf("%d%d",&n,&e);
	Create_GPH(g,n,e);
	printf("%d ",G.s[0]+1);
	DFS_Search(g,0,n);
}
