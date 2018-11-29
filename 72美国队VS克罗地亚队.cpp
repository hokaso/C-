#include<stdio.h>
int main()
{
	int n,m,a;
	while(scanf("%d%d%d",&n,&m,&a)!=EOF)
	{
		if(n==0&&m==0&&a==0)
			break;
		printf("%d\n",(m+a)*2-n);
	}
}