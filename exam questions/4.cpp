#include<stdio.h>
int main()
{
    int i,n;
    char ch;
    scanf("%d",&n);
    ch=getchar();
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(a[0]<a[n]){
        a[0]++;
        a[n]--;}
    else if(a[0]>a[n]){
        a[0]--;
        a[n]++;}
    else
    {
        if(a[1]<a[0]){
            a[1]++;
            a[0]--;}
        else if(a[1]>a[0]){
            a[1]--;
            a[0]++;}
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1]){
            a[i]++;
            a[i-1]--;}
        else if(a[i]>a[i-1]){
            a[i]--;
            a[i-1]++;}
        else
        {
        if(a[i]<a[i+1]){
            a[i]++;
            a[i+1]--;}
        else if(a[i]>a[i+1]){
            a[i]--;
            a[i+1]++;}
        }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
}
