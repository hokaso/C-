#include<stdio.h>
#include<string.h>
int main()
{
    char c[129];
    int a,b;
    while(gets(c))
        {
            for(b=0,a=0;c[a]!='\0';a++)
                if(c[a]==' ')
                    {
                        b=a+1;
                    }
            for(a=b;c[a]!='\0';a++)
                {
                    printf("%c",c[a]);
                }
            printf("\n");
        }
        return 0;
}
