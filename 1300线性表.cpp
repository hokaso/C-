#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;


struct s{
    int value;
    struct s *next;
};

s *Init()
{
    struct s *L;
    L=(struct s *)malloc(sizeof(struct s));
    L->next=NULL;
    return L;
}

int Length(struct s *head)
{
    int i=0;
    struct s *s;
    s=head;
    while(s->next!=NULL){
        s=s->next;
        i++;
    }
     return i;

}

s *Add(struct s *L,int i,int a)
{
    struct s *p,*q,*pt,*r;
    int j=0;
    p=L->next;
    while(p!=NULL){
        p=p->next;j++;}
     if(i>j&&L->next!=NULL){
         pt=L;
            while(pt->next!=NULL)
            pt=pt->next;
        q=(s *)malloc(sizeof(s));
        q->value=a;
        q->next=NULL;
        pt->next=q;
        return L;
     }
     if(L->next==NULL){
        q=(s *)malloc(sizeof(s));
        q->value=a;
        L->next=q;
        q->next=NULL;
        return L;
     }
     if(i<=j&&L->next!=NULL&&i==1)
     {
         pt=L;
         for(int l=0;l<i;l++)
            pt=pt->next;
         q=(s *)malloc(sizeof(s));
         q->value=a;
         q->next=pt;
         L->next=q;
         return L;
}
}

s *Delete(struct s *L,int x)
{
    s *p,*q,*pt;
    int j=0,y=0;
    p=L;
    q=L;
    int w=0;
    pt=L->next;
    while(pt!=NULL){
        pt=pt->next;w++;}
    if(w>=x){
    while(j<x){
        p=p->next;
        j++;}
    while(y<x-1){
        q=q->next;y++;}
    q->next=p->next;
    free(p);}
    else ;
    return L;
}

s *Printf(struct s *head)
{
    struct s *ptr;
    for(ptr=head->next;ptr!=NULL;ptr=ptr->next)
        printf("%d ",ptr->value);
    printf("\n");
    return head;
}

int hash(char *choice)
    {
        if((strcmp("INIT",choice)==0))
            return 1;
        else if(strcmp("ADD",choice)==0)
            return 2;
        else if(strcmp("DELETE",choice)==0)
            return 3;
        else if(strcmp("PRINT",choice)==0)
            return 4;
        else if(strcmp("LENGTH",choice)==0)
            return 5;

    }



int main ()
{
	struct s *head;
    char choice[8];
    int n,x,value;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",choice);
        switch(hash(choice))
        {
            case 1:head=Init();break;
            case 2:
                {
                    scanf("%d %d",&x,&value);
                    head=Add(head,x,value);
                }break;
            case 3:
                {
                    scanf("%d",&x);
                    head=Delete(head,x);
                }break;
            case 4:head=Printf(head);break;
            case 5:printf("%d\n",Length(head));break;

        }
    }
}
