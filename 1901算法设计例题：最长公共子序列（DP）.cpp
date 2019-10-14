#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int a[1001][1001];

int main()
{
    int i,j,pp,nei,neii,mtt;
    char jsi[1001],jsii[1001];
    cin>>mtt;
    for(pp=0;pp<mtt;pp++){
        cin>>jsi>>jsii;
        nei=strlen(jsi);
        neii=strlen(jsii);
        for(i=0;i<=nei;i++)
            a[i+1][0]=0;
        for(j=0;j<neii;j++)
            a[0][j+1]=0;
        for(i=0;i<=nei;i++)
            for(j=0;j<=neii;j++)
                if(jsi[i]==jsii[j])
                    a[i+1][j+1]=a[i][j]+1;
                else{

                    if(a[i][j+1]>a[i+1][j])
                        a[i+1][j+1]=a[i][j+1];
                    else
                        a[i+1][j+1]=a[i+1][j];
                }

        cout<<a[nei][neii]<<endl;

    }

}
