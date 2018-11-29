#include<stdio.h>
int main()
{
    int y[10000],i,n,min,max;
    char x[10000][61],ch;
    while(scanf("%d",&n)!=EOF)
        {
            if(n==0)
                break;
            ch=getchar();
            min=max=0;
            i=0;
            while(i<=n-1)
                {
                    scanf("%s",&x[i]);
                    scanf("%d",&y[i]);
                    ch=getchar();
                    if(y[i]<y[min])
                        min=i;
                    if(y[max]<y[i])
                        max=i;
                    i++;
                }
                printf("%s %s\n",x[max],x[min]);
        }
    return 0;
}


