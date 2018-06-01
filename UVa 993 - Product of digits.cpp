#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,d,b,i,j,k,l;
    vector<int>a;
    while(cin>>t)
    {
        for(k=0; k<t; k++)
        {
            cin>>n;
            if(n<10)
            {
                cout<<n<<endl;
                continue;
            }
            d=9;
            i=0;
            while(d>1)
            {
                while(n%d==0)
                {
                    n=n/d;
                    a.push_back(d);
                }
                d--;
            }
            if(n==1)
            {
                sort(a.begin(),a.end());
                for(i=0; i<a.size(); i++)
                {
                    cout<<a[i];
                }
                cout<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
            a.clear();
        }
    }
    return 0;
}
