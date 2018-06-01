#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,n;
    vector<long long int>fact;
    vector<long long int>sum;
    while(cin>>n)
    {
        if(n==-1) break;
        fact.push_back(0);
        fact.push_back(1);
        fact.push_back(1);
        for(i=2;i<=91;i++){
            fact.push_back(fact[i]+fact[i-1]);
        }
        sum.push_back(0);
        k=0;
        for(i=1;i<fact.size();i++){
            k+=fact[i];
            sum.push_back(k);
        }
        /*
        for(i=0;i<sum.size();i++){
            cout<<sum[i]<<" ";
        }
        cout<<endl;
        */
        cout<<sum[n]<<" "<<sum[n+1]<<endl;
        sum.clear();
        fact.clear();
    }
    return 0;
}
