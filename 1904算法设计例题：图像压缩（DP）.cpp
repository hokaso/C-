#include<stdio.h>
#include <iostream>
using namespace std;

int tthhll(int i)
{
    i=i/2;
    int al=1;
    for(; i>0; i=i/2)
    {
        al++;
    }
    return al;
}

int main()
{
    int nnn,lenmax=256,high=11,klk;
    scanf("%d",&klk);
    while(klk>0)
    {
        cin>>nnn;
        nnn=nnn+1;
        int p[nnn];
        p[0]=0;
        for(int i=1; i<nnn; i++)
        {
            cin>>p[i];
        }
        int s[nnn],l[nnn],b[nnn],n=nnn-1;
        s[0] = 0;
        for(int i=1; i<=n; i++)
        {
            b[i]=tthhll(p[i]);//计算像素点p需要的存储位数
            int sbcf = b[i];
            s[i]=s[i-1]+sbcf;
            l[i]=1;
            for(int j=2; j<=i&&j<=lenmax; j++)
            {
                if(sbcf<b[i-j+1])
                {
                    sbcf=b[i-j+1];
                }
                if(s[i]>s[i-j]+j*sbcf)
                {
                    s[i]=s[i-j]+j*sbcf;
                    l[i]=j;
                }
            }
            s[i]+=high;
        }
        cout<<s[nnn-1]<<endl;
        klk--;
    }

}
