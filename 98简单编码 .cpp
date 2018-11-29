#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int i,n,l;
    while(gets(a))
    {
        if(strlen(a)==3&&a[0]=='E'&&a[1]=='N'&& a[2]=='D')
            break;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            switch(a[i])
            {
                case'A':case'W':case'F':a[i]='I';break;
                case'C':a[i]='L';break;
                case'M':a[i]='o';break;
                case'S':a[i]='v';break;
                case'D':case 'P':case'G':case'B':a[i]='e';break;
                case'L':a[i]='Y';break;
                case'X':a[i]='u';break;
            }
        }
        for(n=0;n<l;n++)
        {
            printf("%c",a[n]);
        }
        printf("\n");
    }
}
