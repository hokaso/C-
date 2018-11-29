#include<stdio.h>
int main()
{
    int s,t;
    int sum;
    while(scanf("%d",&s)!=EOF)
    {
        if(s==0)
            break;
        else
        {
            sum=0;
            while(s!=0)
            {
                t=s%10;
                sum+=t;
                s/=10;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
