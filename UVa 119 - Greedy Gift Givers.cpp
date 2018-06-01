#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numf,i,j,k,a,b,c,d,e,f,cnt;
    string s[100],giver,taker,s3;
    map<string,int>mp;
    cnt=1;
    while(cin>>numf)
    {
        for(i=1; i<=numf; i++)
        {
            cin>>s[i];
            mp[s[i]]=0;
        }
        for(i=1; i<=numf; i++)
        {
            cin>>giver;
            cin>>a>>b;
            if(b!=0)
            {
                c=a/b;
                d=c*b;

                for(j=1; j<=b; j++)
                {
                    cin>>taker;
                    mp[taker]+=c;
                }
                mp[giver]-=d;
            }
        }
        if(cnt!=1) cout<<endl;
        for(i=1; i<=numf; i++)
        {
            cout<<s[i]<<" "<<mp[s[i]]<<endl;
        }
        cnt++;
    }
    return 0;
}
