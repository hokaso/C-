#include<stdio.h>
int main()
{
    int i,n1,n2;
    char str1[1002],str2[1002];
    char ch;
    while(gets(str1))
    {
        gets(str2);
        for(i=0,n1=0;str1[i]!='\0';i++)
        {
            ch=str1[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            n1++;
        }
        for(i=0,n2=0;str2[i]!='\0';i++)
        {
            ch=str2[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            n2++;
        }
        if(n1>n2){printf("a>b\n");}
        else if(n1==n2){printf("a==b\n");}
        else{printf("a<b\n");}
    }
    return 0;
}
