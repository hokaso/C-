#include<stdio.h>

 #include<string.h>
 int main()

 {

     int m,n,i,l;

     int a[100];
     while(scanf("%d%d",&n,&m)!=EOF)
    {
         if(n==0&&m==0)
            break;
       for(i=0;i<n;i++)
       {
            scanf("%d",&a[i]);

         }

             for(i=0;i<n;i++)
        {
             if(a[i]>m)
                 {
                     for(l=n;l>=i;l--)
                     {

                        a[l+1]=a[l];
                    }

                     a[i]=m;

                     break;

                 }

             else if(a[n-1]<=m)

             a[n]=m;
         }

     for(i=0;i<=n;i++)

         printf("%d ",a[i]);

     printf("\n");

     }



 }
