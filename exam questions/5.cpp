#include<stdio.h>
#include<string.h>
int p[1299709];
void r()
{
    int i,j;
    memset(p,0,sizeof(p));
    for(i=2;i<=1299709;i++)
        {
           if(!p[i])
           {
               for(j=2;i*j<=1299709;j++)
                p[i*j]=1;
           }
        }
}
int main()
{
    int n,a,s,t;
    r();
    scanf("%d",&n);
    while(n--)
    {
        s=0;
        scanf("%d",&a);
        if(!p[a]||a==1)
        {
            printf("%d\n",s);
            continue;
        }
        t=a;
        while(a--)
        {
            if(p[a])
                s+=1;
            else
                break;
        }
        while(t++)
        {
            if(p[t])
                s+=1;
            else
                break;
        }
        printf("%d\n",s+2);
    }
}
