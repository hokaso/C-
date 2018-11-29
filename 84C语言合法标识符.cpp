#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l,k,count;
    char ch[51],sh;
    while(scanf("%d",&n)!=EOF)
    {
        sh=getchar();
        for(i=0;i<n;i++)
        {
            count=0;
            memset(ch,0,sizeof(ch));
            gets(ch);
            l=strlen(ch);
                if((ch[0]<=64)||(ch[0]>=91&&ch[0]<=94)||ch[k]==96||ch[0]>=123)
                    count++;
            for(k=1;k<l;k++)
            {
                if(k>=51)
                    break;
                else if((ch[k]<=47)||(ch[k]>=58&&ch[k]<=64)||(ch[k]>=91&&ch[k]<=94)||ch[k]==96||ch[k]>=123)
                    count++;
            }
                if(count==0)
                    printf("yes\n");
                else if(count>0)
                    printf("no\n");
        }
    }
}
