#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

typedef struct BiNode
{
	BiNode *lchild,*rchild;
	char value;
}BiTree;

void Transport(char *PreOrder,char *InOrder,int BiTreeLen,BiTree **root)
{
	BiTree *p;
	char *Mark;
	int LL=0,RL=0;
	p=(BiTree*)malloc(sizeof(BiTree));
	p->value=*PreOrder;
	p->lchild=NULL;
	p->rchild=NULL;
	*root=p;

	if(BiTreeLen==1)
        return;
	for(Mark=InOrder;*Mark!=*PreOrder;)
        Mark++;
	LL=(int)(Mark-InOrder);
	RL=BiTreeLen-LL-1;
	if(LL>0)
		Transport(PreOrder+1,InOrder,LL,&(p->lchild));
	if(RL>0)
		Transport(PreOrder+LL+1,InOrder+LL+1,RL,&(p->rchild));
}

void PostOrder(BiTree *p)
{
	if(p!=NULL)
	{
		PostOrder(p->lchild);
		PostOrder(p->rchild);
		cout<<p->value;
	}
}

int main()
{
	char a[30],b[30];
	BiTree *p;
	while(cin>>a>>b)
	{
		int l=strlen(a);
		Transport(a,b,l,&p);
		PostOrder(p);
		printf("\n");
	}
}
