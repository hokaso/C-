#include<stdio.h>

int main(void)
{
    int e,n,k,j,m=0;
    scanf("%d",&n);
    for(j=1;j<n+1;j++,m++)
        {
            for(e=0;e<(n-1)-m;e++)
                printf(" ");
            for(k=0;k<2*j-1;k++)
                printf("*");
                printf("\n");
        }
    m=0;
    for(j=1;j<n;j++,m++)
        {
            for(e=0;e<m+1;e++)
                printf(" ");
            for(k=0;k<2*(n-m)-3;k++)
                printf("*");
                printf("\n");
        }
    return 0;
}
