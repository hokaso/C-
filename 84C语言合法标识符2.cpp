#include<cstdio>
#include<cstring>
int main()
{
char a[51];
int i=0,m=0;
memset(a,0,sizeof(a));
while((a[i]=getchar())!='\n')
{
if(a[0]>='0'&&a[0]<='9') m++;
else
{
if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]=='_'))
m=m;
else m++;
}
i++;
}
if(m==0) printf("yes");else printf("no");
return 0;
}
