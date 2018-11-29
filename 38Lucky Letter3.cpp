#include <string.h>
#include"stdio.h"
int main(void)
{
    int n,i, z[26], max, xia;
    char c[1050], ch;

    scanf("%d",&n);
    while(n>0)
    {
        n--;
        scanf("%s", c);

        for(i=0; i<26; i++)
            z[i]=0;
        xia=strlen(c);

        for(i=0; i<xia; i++)
            z[c[i]-'a']++;

        max=z[0]; xia=0;
        for(i=1; i<=25; i++)
        if(z[i]>max){
            max=z[i];
            xia=i;
        }

        ch='a'+xia;
        printf("%c %d\n", ch, max);
    }

    return 0;
}
