#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int m,n;
int sum = 0;
int x[14];

int place(int k)
{
    int i;
    for(i=1; i<k; i++)
        if(abs(k-i)==abs(x[k]-x[i]) || x[k] == x[i])
            return 0;
    return 1;
}

int main()
{
    while(scanf("%d",&m)!=EOF)
    {
        while(m>0)
        {
            scanf("%d",&n);
            x[1]=0;
            int t=1;
            while(t>0)
            {
                x[t]+=1;
                int u=0;
                if(x[t]<=n)
                    u=1;
                while(u==1 && !place(t))
                    x[t]++;
                if(x[t]<=n)
                    if(t == n)
                    {
                        sum++;
                    }
                    else
                        x[++t] = 0;
                else
                    t--;
            }
            printf("%d\n",sum);
            sum=0;
            m--;
        }

    }

}
