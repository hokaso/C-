#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[10007],b[10007];
    char next[10007];
    int n;
    scanf("%d ",&n);
    while(n--)
    {
        scanf("%s",&a);
        scanf("%s",&b);
        int l1=strlen(a);
        int l2=strlen(b);

        next[0]=-1;
        int j=0,q=-1;
        while(j<l2-1)
        {
            if(b[j]!=b[q]&&q!=-1)
                q=next[q];
            else
                next[1+j++]=1+q++;
        }

        int i=0;
        j=0;
        while(i<l1&&j<l2)
        {
            if(j==-1||a[i]==b[j])
            {
                i++;j++;
            }
            else
                j=next[j];
        }
        if(j==l2) printf("yes\n");
        else printf("no\n");


    }
}
