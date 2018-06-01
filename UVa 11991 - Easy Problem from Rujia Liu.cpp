#include<bits/stdc++.h>
long long int a[1000001];
using namespace std;
int main()
{
    long long int i,j,n,m,u,k,num;
    vector<vector<int> >a;
    while(cin>>n>>m)
    {
        a.assign(1000000,vector<int>());
        for(i=1;i<=n;i++)
        {
            cin>>num;
            a[num].push_back(i);
        }
        for(j=1;j<=m;j++)
        {
            cin>>k>>u;
            if(k-1<a[u].size()){
                cout<<a[u][k-1]<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
    }
    return 0;
}
