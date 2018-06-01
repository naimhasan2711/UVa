/*bishmillahi rahmanir rahim */
#include<bits/stdc++.h>
int num[10];
using namespace std;
int main()
{
    double test,x,y,z;
    while(cin>>test)
    {
        while(test--)
        {
            cin>>x>>y>>z;
            double dif=x-y;
            double sum=x+y;
            double a,res;
            a=(double)(z/sum);
            x=x+dif;
            res=a*x;
            cout<<res<<endl;

        }
    }
    return 0;
}

