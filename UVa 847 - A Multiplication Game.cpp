#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p,r;


    while(cin>>n)
    {
        p=1;
        bool stan=false;
        bool ollie=true;
        while(p<n)
        {
            if(stan!=true)
            {
                p*=9;
                stan=true;
                ollie=false;
            }
            else
            {
                p*=2;
                ollie=true;
                stan=false;
            }
        }
        if(stan!=false)
        {
            cout<<"Stan wins.\n";
        }
        else
        {
            cout<<"Ollie wins.\n";
        }
    }

    return 0;
}
