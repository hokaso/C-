#include<stdio.h>
int main()
{
    int a,b,c;
    int a1,b1,c1;
    scanf("%d%d%d",&a,&b,&c);
    scanf(" %d%d%d",&a1,&b1,&c1);
    if(a<a1)
        printf("older");
    else if(a==a1)
    {
        if(b<b1)
            printf("older");
        else if(b==b1)
        {
            if(c<c1)
                printf("older");
            else if(c==c1)
                printf("same");
            else
                printf("younger");
        }
        else
            printf("younger");
    }
    else
        printf("younger");
}
