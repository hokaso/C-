//                            _ooOoo_
//                           o8888888o
//                           88" . "88
//                           (| -_- |)
//                            O\ = /O
//                        ____/`---'\____
//                      .   ' \\| |// `.
//                       / \\||| : |||// \
//                     / _||||| -:- |||||- \
//                       | | \\\ - /// | |
//                     | \_| ''\---/'' | |
//                      \ .-\__ `-` ___/-. /
//                   ___`. .' /--.--\ `. . __
//                ."" '< `.___\_<|>_/___.' >'"".
//               | | : `- \`.;`\ _ /`;.`/ - ` : | |
//                 \ \ `-. \_ __\ /__ _/ .-` / /
//         ======`-.____`-.___\_____/___.-`____.-'======
//                            `=---='
//
//         .............................................
//                  ·ð×æ±£ÓÓ             Ò»´ÎAC


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 20000;
typedef struct
{
    char a;
    int weight;
    int parent;
    int lchild;
    int rchild;
}HNodeType;

typedef struct
{
    int space[27];
    int start;
}HCodeType;

char num[5000];

char word[1000];

void creat(HNodeType HFMTree[],int n,int a[]);

void HaffmanCode(HNodeType HFMTree[],HCodeType HuffCode[]);

int ch[30]= {186,64,13,22,32,103,21,15,47,57,1,5,32,20,57,63,15,1,48,51,80,23,8,18,1,16,1};

char ch2[31]=" ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void Decipher(HNodeType HT[], int n,char num[]);

int main()
{

    int j,k,l,a,i,n;

    HNodeType tree1[53];

    HCodeType tree2[27];

    creat(tree1,53,ch);

    HaffmanCode(tree1,tree2);

    scanf("%d ",&n);

    while(n!=0)
    {
        i=0;
    while((word[i]=getchar())!='\n')
        i++;

    word[i]='\0';

    k=strlen(word);

    for(j=0; word[j]!='\0'; j++)
    {
        if(word[j]==' ')
        {
            for(k=tree2[0].start; k<=26; k++)
            {
                printf("%d",tree2[0].space[k]);
            }
        }
        else if(word[j]>='A'&&word[j]<='Z')

        {

            for(a=tree2[(word[j]-64)].start; a<=26; a++)
            {
                printf("%d",tree2[(word[j]-64)].space[a]);
            }
        }

        else
        {
            putchar(word[j]);
        }

    }


    printf("\n");
        n--;
    }

    //getchar();
    scanf("%d ",&n);

    while(n!=0)
    {
        i=0;
    while((num[i]=getchar())!='\n')
        i++;
    num[i]='\0';
    Decipher(tree1,27,num);
        n--;
    }

}
void creat(HNodeType HFMTree[],int n,int a[])
{
    int m1,m2,M1,M2;
    int i,j;
    for(i=0; i<53; i++)
    {
        HFMTree[i].weight=0;
        HFMTree[i].parent=-1;
        HFMTree[i].lchild=-1;
        HFMTree[i].rchild=-1;

    }



    for(i=0; i<27; i++)
    {
        HFMTree[i].weight=a[i];
        HFMTree[i].a=ch2[i];
    }

    for(i=0; i<26; i++)
    {
        m1=m2=0;
        M1=M2=MAX;
        for(j=0; j<27+i; j++)
        {
            if(HFMTree[j].parent==-1&&HFMTree[j].weight<M1)
            {
                M2=M1;
                m2=m1;
                M1=HFMTree[j].weight;
                m1=j;
            }
            else if(HFMTree[j].parent==-1&&HFMTree[j].weight<M2)
            {
                M2=HFMTree[j].weight;
                m2=j;
            }
        }
        HFMTree[m1].parent=27+i;
        HFMTree[m2].parent=27+i;
        HFMTree[27+i].weight=HFMTree[m1].weight+HFMTree[m2].weight;
        HFMTree[27+i].lchild=m1;
        HFMTree[27+i].rchild=m2;
    }


}

void HaffmanCode(HNodeType HFMTree[],HCodeType HuffCode[])
{
    HCodeType hfmt;
    int i,j,c,p;

    for(i=0; i<27; i++)
    {
        hfmt.start=26;
        c=i;
        hfmt.start=26;
        c=i;
        p=HFMTree[c].parent;
        while(p!=-1)
        {
            if(HFMTree[p].lchild==c) hfmt.space[hfmt.start]=0;
            else hfmt.space[hfmt.start]=1;
            hfmt.start--;
            c=p;
            p=HFMTree[c].parent;
        }
        for(j=hfmt.start+1; j<27; j++)
        {
            HuffCode[i].space[j]=hfmt.space[j];
        }
        HuffCode[i].start=hfmt.start+1;
    }
}
void Decipher(HNodeType HT[], int no,char num[])
{
    int i,j,p,q;

    p=2*no-2;
    q=strlen(num);
    for(j=0; j<q; j++)
    {
        if(num[j]=='1'||num[j]=='0')
        {
            if (num[j] == '0')   p=HT[p].lchild;
            else p=HT[p].rchild;

            if(HT[p].lchild==-1&&HT[p].rchild==-1)
            {
                printf("%c",HT[p].a);
                p=2*no-2;
            }
        }
        else
        {
            printf("%c",num[j]);
        }

    }
    printf("\n");
}
