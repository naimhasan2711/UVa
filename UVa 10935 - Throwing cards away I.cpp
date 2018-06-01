#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b;
    while(cin>>n)
    {
        if(n==0) break;

        queue<int>res;

        for(i=1; i<=n; i++)
        {
            res.push(i);
        }
        cout<<"Discarded cards:";
        while(res.size()>1)
        {
            a=res.front();
            cout<<" "<<a;
            res.pop();
            b=res.front();
            res.pop();
            if(!res.empty())
            {
                cout<<",";
            }
            res.push(b);
        }
        printf("\nRemaining card: %d\n",res.front());
        res.pop();
    }
    return 0;
}
