#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,i,j,num,a[10010];
    while(cin>>n>>r)
    {
        for(j=1;j<=n;j++){
            a[j]=0;
        }
       for(i=1;i<=r;i++){
        cin>>num;
        a[num]=1;
       }
        if(n==r){
            cout<<"*\n";
        }
        else{
            for(i=1;i<=n;i++){
                if(a[i]==0){
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
