#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a[100],i;
        a[1]=1;
        a[2]=2;
        for(i=3;i<=50;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
    while(cin>>n && n!=0)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}


