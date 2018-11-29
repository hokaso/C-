#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,r,m;
	char s[1024];
	while(gets(s))
	{
		r=strlen(s);
		m=r-1;
    for(n=0;n<r/2;n++)
   {
        if(s[n]==s[m])
        m--;
        else if(s[n]!=s[m])
        break;
   }

		if(n>=m)
		printf("Yes\n");
		else
		printf("No\n");
	}
}
