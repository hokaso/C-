#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,s,i,e,a,count;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        count=0;
        if(x==0&&y==0)
            break;
        for(i=x;i<=y;i++)
        {
            s=i*i+i+41;
            e=sqrt(s);
            for(a=2;a<=e;a++)
            {
            if(s%a==0)
            count++;
            }

        }
        if(count==0&&s!=1)
            printf("OK\n");
        else
        printf("Sorry\n");
    }

}
