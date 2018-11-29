#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[100],c;
    int i;
    while(gets(s))
    {
        if (s[0]!=' ')
        {
            if (islower(s[0]))
                s[0]=toupper(s[0]);
        }
        for(i=0;(c=s[i])!='\0';i++)
        {
            if(c==' '&&s[i+1]!=' ')
            {
                if (islower(s[i+1]))
                    s[i+1]=toupper(s[i+1]);
            }
        }
        printf("%s\n",s);
    }
}
