#include<stdio.h>
int main()
{
	int n,s,l,i;
	while(scanf("%d",&n)!=EOF)
	{
		s=1;		
		for(i=1;i<=n;i++)		
		{
			scanf("%d",&l);			
			if(l%2!=0)
				s*=l;
		}	
	printf("%d\n",s);
	}
}