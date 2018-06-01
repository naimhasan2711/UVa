#include<bits/stdc++.h>
#define max 10010
using namespace std;
int mark[max];
int cnt[max];
void seive()
{
    int i,j,s;
    for(i=2; i<=max; i++)
    {
        mark[i]=1;
    }
    s=sqrt(max);
    for(i=2; i<=s; i++)
    {
        if(mark[i]==1)
        {
            for(j=i*2; j<=max; j=j+i)
            {
                mark[j]=0;
            }
        }
    }
}

int main()
{
    seive();
    vector<int>p;
    int i,j,k,l;
    p.clear();
    for(int pp=2; pp<=max; pp++)
    {
        if(mark[pp]==1)
        {
            p.push_back(pp);
        }
    }
    int num;
    memset(cnt,0,sizeof(cnt));
    l=p.size();
    //cout<<l<<endl;
    for(i=0; i<l; i++)
    {
        int s=0;
        for(j=i; j<l; j++)
        {
            s+=  p[j];
            if(s>max) break;
            ++cnt[s];
        }

    }
    while(cin>>num)
    {
        if(num==0)
        {
            break;
        }
        else
        {
            cout<<cnt[num]<<endl;
        }
    }
    return 0;
}
