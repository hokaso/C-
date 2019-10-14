#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,t;
    char s[100001],s1[100001];
    int count;
    while(cin>>s)
    {
        gets(s1);
        i=0,j=0,t=0;
        count=0;
        for(i=0;i<strlen(s1); i++)
        {
            if(s[j]==s1[i]) j++;
        }
        //cout<<s[100001]<<endl;
        //cout<<s1[100001]<<endl;
        if(j==strlen(s)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
