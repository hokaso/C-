#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Bitree
{
    char data;
    struct Bitree *lchild,*rchild;
} BiTNode,*BiTree;


int i,j;
char ch[50000];

void PreOrder(BiTree bt)
{
    if(bt==NULL)
        return;
    printf("%c",bt->data);
    PreOrder(bt->lchild);
    PreOrder(bt->rchild);
}

void InOrder(BiTree bt)
{
    if(bt==NULL)
        return;
    InOrder(bt->lchild);
    printf("%c",bt->data);
    InOrder(bt->rchild);
}

void PostOrder(BiTree bt)
{
    if(bt==NULL)
        return;
    PostOrder(bt->lchild);
    PostOrder(bt->rchild);
    printf("%c",bt->data);
}

void BiTree_FREE(BiTree bt)
{
    if(bt==NULL){

        return;
    }

    BiTree_FREE(bt->lchild);
    BiTree_FREE(bt->rchild);
    free(bt);
    //printf("%c",bt->data);
}

int CountLeaf(BiTree bt)
{
    if(bt==NULL)
        return 0;
    if(bt->lchild==NULL&&bt->rchild==NULL)
        return 1;
    return(CountLeaf(bt->lchild)+CountLeaf(bt->rchild));
}

int depth(BiTree bt)
{
    int a,b;
    if(bt==NULL)
        return 0;
    else
    {
        a=depth(bt->lchild);
        b=depth(bt->rchild);
        if(a>b)
            return (a+1);
        else
            return (b+1);
    }
}

BiTree CreateBiTree()
{
    BiTree T;

    if(ch[j]=='$'){

        j++;
        return NULL;
    }



    else //if(ch!='\n')
    {
        T=(BiTNode*)malloc(sizeof(BiTNode));
        T->data=ch[j];
        j++;
        T->lchild=CreateBiTree();
        T->rchild=CreateBiTree();
        return T;
    }

}

int main()
{
    BiTree bt;
    while(scanf("%s",&ch)!=EOF)
    {
    j=0;
    bt=CreateBiTree();
    PreOrder(bt);
    printf("\n");
    InOrder(bt);
    printf("\n");
    PostOrder(bt);
    printf("\n");
    i=depth(bt);
    printf("%d\n",i);
    i=CountLeaf(bt);
    printf("%d\n",i);
    BiTree_FREE(bt);
    printf("\n");
    }

}
