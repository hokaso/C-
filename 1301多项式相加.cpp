#include<stdio.h>
struct s
{
    int cent,clog;
};

int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int x,y,m=-1,i,k,n1=0,n2=0,flag;
        scanf("%d",&x);
        struct s s_1[x*x+1];
        for(i=0;i<x;i++)
        {
            scanf("%d",&s_1[i].cent);
            scanf("%d",&s_1[i].clog);
        }
        scanf("%d",&y);
        struct s s_2[y*y+1];
        for(i=0;i<y;i++)
        {
            scanf("%d",&s_2[i].cent);
            scanf("%d",&s_2[i].clog);
        }
        for(i=0;i<x;i++)
        {
            for(k=0;k<y;k++)
            {
                if(s_1[i].clog==s_2[k].clog)
                    s_1[i].cent=s_1[i].cent+s_2[k].cent;
            }

        }
        m=x-1;
        for(i=0;i<y;i++)
        {
            flag=0;
            for(k=0;k<x;k++)
        {
            if(s_2[i].clog==s_1[k].clog)
                flag=1;
        }
        if(flag==0)
        {
            m++;
            s_1[m].cent=s_2[i].cent;
            s_1[m].clog=s_2[i].clog;

        }
        }


    for(i=0;i<m;i++)
    {
        for(k=i+1;k<=m;k++)
            if(s_1[i].clog<s_1[k].clog)
            {
                n1=s_1[i].clog;
                n2=s_1[i].cent;
                s_1[i].clog=s_1[k].clog;
                s_1[k].clog=n1;
                s_1[i].cent=s_1[k].cent;
                s_1[k].cent=n2;
            }

    }
    int re=0;
    for(i=0;i<=m;i++)
        if(s_1[i].cent!=0)
            re++;
    if(re==0)
        printf("1 0 0\n");
    else
    {
        printf("%d",re);
        for(i=0;i<=m;i++)
        {
            if(s_1[i].cent!=0)
                printf(" %d %d",s_1[i].cent,s_1[i].clog);
        }
        printf("\n");
    }

    }

}
