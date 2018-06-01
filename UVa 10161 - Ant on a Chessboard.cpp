              /*bismillahi rahmanir rahim*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, tc, kk=1, row, col, base;
    string s;
    while(cin>>n && n)
    {
        base = sqrt(n);
        if(base*base<n)
            base++;
        if(n>(base*base-base))
        {
            col=base;
            row=base*base-n+1;
        }
        else
        {
            row=base;
            col=n-(base-1)*(base-1);
        }
        if(base%2) swap(row, col);
        cout<<col<<" "<<row<<"\n";
    }
    return 0;
}
