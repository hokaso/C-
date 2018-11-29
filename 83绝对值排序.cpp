#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[101],k,max,z;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(k=0;k<n-1;k++)
        {
            max=k;
            for(i=k+1;i<n;i++)
                if(fabs(a[i])>fabs(a[max]))
                max=i;
            z=a[max];
            a[max]=a[k];
            a[k]=z;
        }
        for(i=0;i<n;i++){
            printf("%d",a[i]);
            if(i!=n-1)
                printf(" ");}
        printf("\n");
    }
}
