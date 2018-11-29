#include<stdio.h>
int main()
{
    int i,m,j,N;
    while( scanf("%d",&N)!=EOF)
        {
        if(N==0)
            break;
        int a[N];
        for(i=0;i<N;i++)
            scanf("%d",&a[i]);
        for(i=0;i<N;i++)
            for(j=i+1;j<N;j++)
                if(a[i]<a[j])
                {
                    m=a[i];
                    a[i]=a[j];
                    a[j]=m;
                }
            for(i=0;i<N;i++){
                printf("%d",a[i]);
                if(i<N-1)
                printf(" ");
            }
            printf("\n");
        }
}
