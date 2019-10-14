//题目不是一个意思嘛？？？

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#define MAX 30

using namespace std;

typedef struct BiNode
{
    BiNode *lchild,*rchild;
    char value;
} BiTree;

typedef struct
{
 BiTree *st[MAX];
 int tou,wei;//队头和队尾
}BT;

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
    for(Mark=InOrder; *Mark!=*PreOrder;)
        Mark++;
    LL=(int)(Mark-InOrder);
    RL=BiTreeLen-LL-1;
    if(LL>0)
        Transport(PreOrder+1,InOrder,LL,&(p->lchild));
    if(RL>0)
        Transport(PreOrder+LL+1,InOrder+LL+1,RL,&(p->rchild));
}

void Translevel(BiTree *t)
{
    BT *q=(BT *)malloc(sizeof(BT));
    q->tou=0;
    q->wei=0;

    if(t!=NULL)
        printf("%c",t->value);

    q->st[q->wei]=t;
    (q->wei)++;
    while((q->tou)<(q->wei))
    {
        t=q->st[q->tou];
        (q->tou)++;
        if(t->lchild!=NULL)
        {
            q->st[q->wei]=t->lchild;
            printf("%c",t->lchild->value);
            (q->wei)++;
        }
        if(t->rchild!=NULL)
        {
            q->st[q->wei]=t->rchild;
            printf("%c",t->rchild->value);
            (q->wei)++;
        }
    }
}

int main()
{
    char a[30],b[30];
    BiTree *p;
    while(scanf("%s %s",a,b)!=EOF)
    {
        //char CH=getchar();
        int l=strlen(a);
        Transport(a,b,l,&p);
        Translevel(p);
        printf("\n");
    }
}
