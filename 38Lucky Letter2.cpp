#include<stdio.h>
#include<string.h>
int main(void)
{
    int rt,i,max,x;
    int a[26];
    char ch[1002],po;
    scanf("%d",&rt);
    while(rt>0)
    {
        scanf("%s", ch);
        for(i=0; i<26;i++)
        {
        a[i]=0;
        x=strlen(ch);
        }
        for(i=0;i<x;i++)
        {
        a[ch[i]-'a']++;
        max=a[0];
        }
        x=0;
        for(i=1;i<=25;)
        {
            if(a[i]>max)
        {
            max=a[i];
            x=i;
        }
            else{}
        i++;
        po=x+'a';
        }
        printf("%c %d\n",po,max);
        rt--;
    }
}
