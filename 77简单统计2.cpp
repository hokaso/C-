#include<stdio.h>
#include<string.h>
int main()
{
    int i,number,letter,other,space;
    char str[81];
    while(gets(str))
    {

        number=letter=other=space=0;
        for(i=0;str[i]!='\0';i++){
            if(str[i]>='0'&&str[i]<='9')
            number++;
            else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            letter++;
            else if(str[i]==' ')
            space++;
            else
                other++;
            }
            printf("%d %d %d %d\n",letter,space,number,other);
    }
}
