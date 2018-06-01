/*bishmillahi rahmanir rahim*/
#include<bits/stdc++.h>
#define max 10000002
int mark[max];
using namespace std;
void seive()
{
    int i,j,s;
    for(i=2; i<=max; i++)
    {
        mark[i]=0;
    }
    s=sqrt(max);
    for(i=2; i<=s; i++)
    {
        if(mark[i]==0)
        {
            for(j=2*i; j<=max; j=j+i)
            {
                mark[j]=1;
            }
        }
    }
}
int main()
{
    long int n,i;
    vector<int>a;
    seive();
    while(cin>>n)
    {
        if(n<8)
        {
            printf("Impossible.\n");
        }
        else
        {
            if(n%2==0)
            {
                a.push_back(2);
                a.push_back(2);
                n=n-4;
            }
            else
            {
                a.push_back(2);
                a.push_back(3);
                n=n-5;
            }
            for(i=2; i<=n; i++)
            {
                if(mark[i]==0 && mark[n-i]==0)
                {
                    break;
                }
            }
            a.push_back(i);
            a.push_back(n-i);
            sort(a.begin(),a.end());
            for(int j=0; j<a.size(); j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
        a.clear();
    }
    return 0;
}
