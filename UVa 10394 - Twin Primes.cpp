/*bishmillahi rahmanir rahim*/
#include<bits/stdc++.h>
#define max  20000000
int mark[max];
int tp[max];
using namespace std;
void seive()
{
    int i,j,s;
    for(i=2; i<=max; i++)
    {
        mark[i]=0;
    }
    s=sqrt(max);
    for(i=2; i<=s; i++)
    {
        if(mark[i]==0)
        {
            for(j=2*i; j<=max; j=j+i)
            {
                mark[j]=1;
            }
        }
    }
}
void twin()
{
    int j=1;
    for(int i=3;i<=max;i++)
    {
        if(mark[i]==0 && mark[i+2]==0)
        {
            tp[j++]=i;
        }
    }
}
int main()
{
    int s;
    seive();
    twin();
    while(cin>>s)
    {
        printf("(%d, %d)\n",tp[s],tp[s]+2);
    }
    return 0;
}
