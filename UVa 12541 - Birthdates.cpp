#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,d,m,y,rs;
    string name;
    map<int,string>mp;
    priority_queue<int>p1;
    priority_queue<int>p2;
    scanf("%d",&n);
    while(n--)
    {
        cin>>name;
        scanf("%d %d %d",&d,&m,&y);
        rs=d+(31*m)+(y*31*12);
        mp[rs]=name;
        p1.push(rs);
        p2.push(-rs);
    }
    cout<<""<<mp[p1.top()]<<endl;
    cout<<""<<mp[-p2.top()]<<endl;
    return 0;
}
