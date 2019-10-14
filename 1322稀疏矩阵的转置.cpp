#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SMAX 10003

typedef struct
{
    int i,j;
    int v;
}SPNode;

typedef struct
{
    int mu,nu,tu;
    SPNode data[SMAX];
}SPMatrix;

SPMatrix * TransM2(SPMatrix *A)
    {

        SPMatrix *B;
        int i,j,k;
        B=(SPMatrix *)malloc(sizeof(SPMatrix));
        //printf("$");
        int num[A->nu+1],cpot[A->nu+1];
        //printf("$");
        B->mu=A->nu;
        B->nu=A->mu;
        B->tu=A->tu;
        if(B->tu>0)
        {
            for(i=1;i<=A->nu;i++)
                num[i]=0;
            //printf("$");
            for(i=1;i<=A->tu;i++)
            {
                j=A->data[i].j;
                num[j]++;
            }
            //printf("$");
            cpot[1]=1;
            for(i=2;i<=A->nu;i++)
                cpot[i]=cpot[i-1]+num[i-1];
            //printf("$");
            for(i=1;i<=(A->tu);i++)
            {
                j=A->data[i].j;
                k=cpot[j];
                B->data[k].i=A->data[i].j;
                B->data[k].j=A->data[i].i;
                B->data[k].v=A->data[i].v;
                cpot[j]++;
            }



        //printf("$");
    }
    //printf("#");
        return B;
    }


int main()
{
    int i;
    SPMatrix *p;
    p=(SPMatrix *)malloc(sizeof(SPMatrix));
    scanf("%d %d %d",&p->mu,&p->nu,&p->tu);
    for(i=1;i<=p->tu;i++)
    {
        scanf("%d %d %d",&p->data[i].i,&p->data[i].j,&p->data[i].v);
    }
    p=TransM2(p);
    printf("%d %d %d\n",p->mu,p->nu,p->tu);
    for(i=1;i<=p->tu;i++)
    {
        printf("%d %d %d\n",p->data[i].i,p->data[i].j,p->data[i].v);
    }

}
