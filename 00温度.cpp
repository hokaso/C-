#include<stdio.h>
int main ()
{
    double ce,fa;
    while(scanf("%lf",&fa)!=EOF){
         ce=5.00*(fa-32.00)/9.00;
        printf("%.2f\n",ce);
    }
	return 0;
}
