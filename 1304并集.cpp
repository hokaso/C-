#include<string.h>
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    while(scanf("%d",&n)!=EOF)
    {
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
		cin>>b[i];

	int JJ[n+m],BJ[n+m];
	int x=0,y=0;
	memcpy(BJ,a,sizeof(a));
	for(int i=0;i<m;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
			if(b[i]!=a[j])
				count++;
		if(count==n)
			BJ[n+(x++)]=b[i];
		else
			JJ[y++]=b[i];
	}
	sort(BJ,BJ+n+x);

        printf("%d",n+x);
		for(int i=0;i<n+x;i++)
            printf(" %d",BJ[i]);
        printf("\n");

    }

}
