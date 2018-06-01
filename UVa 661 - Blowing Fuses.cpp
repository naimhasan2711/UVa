#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,cnt=1,i;
    while(cin>>n>>m>>c)
    {
        if(n==0 && m==0 && c==0) break;
        vector<bool>state (n+1,false);
        vector<int>consume(n+1,0);
        for(i=1;i<=n;i++){
            cin>>consume[i];
        }
        int maxi=0;
        int id=0;
        int res=0;
        bool blown=false;
        for(int j=1;j<=m&& !blown;j++)
        {
            cin>>id;
            if(state[id]==true){
                maxi-=consume[id];
                state[id]=false;
            }
            else{
                maxi+=consume[id];
                if(maxi>c){
                    blown=true;
                    for(int k=j+1;k<=m;k++) cin>>id;
                }
                state[id]=true;
                res=max(res,maxi);
            }
        }
        cout<<"Sequence "<<cnt++<<endl;
        if(blown==false){
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<res<<" amperes."<<endl;
        }
        else{
            cout<<"Fuse was blown."<<endl;
        }
        cout<<endl;

    }

    return 0;
}

