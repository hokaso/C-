#include<stdio.h>
#include<string.h>
int main()
{
    long long i,num,s,l;
    char str[81];
    while(gets(str))
    {
        s=0;
        num=1;
        l=strlen(str)-1;
        for(i=l;i>=0;){
            if(str[i]=='a'||str[i]=='A'){
            s=s+10*num;
            num*=16;}
            else if(str[i]=='b'||str[i]=='B'){
            s=s+11*num;
            num*=16;}
            else if(str[i]=='c'||str[i]=='C'){
            s=s+12*num;
            num*=16;}
            else if(str[i]=='d'||str[i]=='D'){
            s=s+13*num;
            num*=16;}
            else if(str[i]=='e'||str[i]=='E'){
            s=s+14*num;
            num*=16;}
            else if(str[i]=='f'||str[i]=='F'){
            s=s+15*num;
            num*=16;}
            else if(str[i]>=48&&str[i]<=57){
            s=s+(str[i]-48)*num;
            num*=16;}
            i--;
    }
    printf("%lld\n",s);
    }

}
