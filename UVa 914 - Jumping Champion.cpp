/*bishmillahi rahmanir rahim*/
#include<bits/stdc++.h>
#define max 1000000
int mark[max];
using namespace std;
void seive()
{
    int i,j,s;
    mark[0]=1;
    mark[1]=1;
    for(i=2; i<=max; i++)
    {
        mark[i]=0;
    }
    s=sqrt(max);
    for(i=2; i<=s; i++)
    {
        if(mark[i]==0)
        {
            for(j=i*2; j<=max; j=j+i)
            {
                mark[j]=1;
            }
        }
    }
}
int main()
{
    int test,t,i,j,k,l,a,b,c,u;
    vector<int>p;
    seive();
    cin>>test;
    for(t=0; t<test; t++)
    {
        int dif[150]= {0};
        int dif1[150]= {0};
        cin>>l>>u;
        for(i=l; i<=u; i++)
        {
            if(mark[i]==0)
            {
                p.push_back(i);
            }
        }
        sort(p.begin(),p.end());
        for(i=1; i<p.size(); i++)
        {
            a=p[i]-p[i-1];
            dif[a]++;
            dif1[a]++;
        }
        p.clear();
        sort(dif,dif+150);
        if(dif[148]==dif[149])
        {
            cout<<"No jumping champion\n";
        }
        else
        {
            for(k=0; k<150; k++)
            {
                if(dif1[k]==dif[149])
                {
                    cout<<"The jumping champion is "<<k<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
