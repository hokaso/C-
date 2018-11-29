#include<stdio.h>
#include<string.h>
int main()
{
    int i,x,y,z,n,s1,s2;
    char a1[100001],a2[100001],b1[100001],b2[100001];
    char ch;
    scanf("%d",&z);
    ch=getchar();
    for(;z!=0;z--)
    {
        memset(a1,0,sizeof(a1));
        memset(a2,0,sizeof(a2));
        memset(b1,0,sizeof(b1));
        memset(b2,0,sizeof(b2));
        gets(a1);
        gets(b1);
        for(i=x=0;a1[i]!='\0';i++)
        {
            if(a1[i]!=' ')
            {a2[x++]=a1[i];}
            //else
                //x--;
        }
        for(i=y=0;b1[i]!='\0';i++)
        {
            if(b1[i]!=' ')
            {b2[y++]=b1[i];}
            //else
                //y--;
        }
        if(strcmp(a2,b2)==0)
        printf("equal\n");
        else
        printf("not equal\n");
    }

}
