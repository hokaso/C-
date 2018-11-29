#include<stdio.h>
int main()
{
    int i,j,n,s,temp1,temp2;
    int cot;
    char ch;
    while(scanf("%d",&n)!=EOF)
    {
        ch=getchar();
        if(n==0)
            break;
        int a[n][n];
        s=cot=temp1=temp2=0;
        for(i=0;i<n;i++)
            s=i+s;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
        {
            if(i<j)
            {
                if(a[i][j]==0)
                    temp1+=1;
            }
            else if(i>j)
            {
                if(a[i][j]==0)
                    temp2+=1;
            }
        }
        if(s==temp2)
            printf("UP\n");
        else if(s==temp1)
            printf("DOWN\n");
        else
            printf("NO\n");
    }

}
