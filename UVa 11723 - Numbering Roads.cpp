/*bishmillahi rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,res,mod,test=0;
    while(cin>>n>>r)
    {
        if(n==0 && r==0) break;
        res=n/r;
        mod=n%r;
        if(mod!=0)
            res=res+1;
        res=res-1;
        if(res>26){
            printf("Case %d: impossible\n",++test);
        }
        else{
            printf("Case %d: %d\n",++test,res);
        }

    }
    return 0;
}
