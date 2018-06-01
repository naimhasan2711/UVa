/*bishmillahi rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,num;
    while(cin>>n)
    {
        if(n==0) break;
        num=1;
        while(num<n)
        {
            num=num*2;
            num++;
        }
        if(num==n) cout<<"Bob\n";
        else cout<<"Alice\n";
    }
    return 0;
}
