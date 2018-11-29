#include<stdio.h>
#include<string.h>
int main()
{
    int i,d,t,w,m;
    char s[1000];
    while(gets(s)!=NULL)
    {
        t=w=0;
        d=strlen(s);
        for(i=0;i<d;i++)
            if(t<s[i]) {t=s[i];m=i;}
            for(i=0;i<d;i++)
                if(s[i]==s[m]) w++;
            printf("第一次出现位置为%d 出现次数为%d\n",m+1,w);
    }
}
