#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],max;
	int i,l;
	while(scanf("%s",a)!=EOF)
	{
		l=strlen(a);
		max=a[l];
		for(i=l;i>=0;i--)
		{
			if(a[i]>max)
                max=a[i];
		}
		for(i=0;i<l;i++)
		{
			if(a[i]==max)
				printf("%c(max)",a[i]);
			else
				printf("%c",a[i]);
		}
		printf("\n");
	}
}

