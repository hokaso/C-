#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,poult,m;
    double male,female;
    while(scanf("%d",&n)!=EOF)
    {
        c=0;
        for(male=1;male<ceil(n/5);male++)
            for(female=1;female<ceil(n/3)-male;female++){
                poult=n-male-female;
                if(poult%3==0&&poult>0){
                    m=male*5+female*3+poult/3;
                        if(m==n)
                            c+=1;}}
        printf("%d\n",c);
    }
    return 0;
}
