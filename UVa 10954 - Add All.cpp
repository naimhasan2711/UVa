/*bishmillahi rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,a,b,c,d,i,j,k,l;
    while(cin>>n && n)
    {
        priority_queue<int>p;
        for(i=0;i<n;i++){
            cin>>a;
            p.push(-a);
        }
        sum=0;
        c=0;
        for(i=0;i<n-1;i++)
        {
            b=p.top();
            b=-b;
            p.pop();
            d=p.top();
            d=-d;
            p.pop();
            c=b+d;
            sum+=c;
            p.push(-c);
        }
        cout<<sum<<endl;
    }
    return 0;
}
