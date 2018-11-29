 #include<stdio.h>

 int main()

 {

     int a,b,c,d;

     int m,n;

    int x,y;

     while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)

     {

         if(a<-10000||a>10000||b<-10000||b>10000||c<-10000||c>10000||d<-10000||d>10000)
            break;

         m=a*c-b*d;

         n=a*d+b*c;

         x=(a*c+b*d)/(c*c+d*d);

         y=(b*c-a*d)/(c*c+d*d);

         printf("%d %d %d %d %d %d\n",a+c,b+d,m,n,x,y);

     }

 }
