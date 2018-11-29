#include<stdio.h>
int main()
{
    int h;
    int n,p,x,i;
    double s1,s2,a,b,c;
    scanf("%d",&h);

    while(h!=0)
        {
            p=1;
            scanf("%d",&n);
            scanf("%lf:%lf:%lf",&a,&b,&c);
            s1=a*60000+b*1000+c;
            while(n-1!=0)
                {
                    scanf("%lf:%lf:%lf",&a,&b,&c);
                    s2=a*60000+b*1000+c;
                    if(s1>s2)
                    {
                        p+=1;
                    }
                    n--;
                }
            printf("%d\n",p);
            h--;
        }
        return 0;
}
