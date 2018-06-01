/*bishmillahi rahmanir rahim*/
#include<bits/stdc++.h>
#define max 1000000
int mark[max];
using namespace std;
int seive()
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
int main()
{
    int test,t,n,x,p,a,b,c,i,j,k,l,st;
    seive();
    while(cin>>test)
    {
        while(test--)
        {
            cin>>n;
            st=n/2;
            x=0;
            for(i=st; i<=n; i++)
            {
                if(mark[i]==0)
                {
                    if((n>i)&& (n<i*2))
                    {
                        x=i;
                        break;
                    }

                }

            }
            cout<<x<<endl;

        }
    }
    return 0;
}
