/*bishmillahi rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l1,h1,l2,h2,a,h,i,j,k,l,m,n,cnt;
    while(cin>>l1>>h1)
    {
        if(l1==0 && h1==0) break;
        long long int bn=0;
        long long int bc=0;
        l2=min(l1,h1);
        h2=max(l1,h1);
        for(i=l2;i<=h2;i++)
        {
            a=i;
            cnt=0;
            if(a==1){
                a=4;
                cnt++;
            }
            while(1)
            {
                if(a%2!=0){
                    a=3*a+1;
                    cnt++;
                }
                else{
                    a=a/2;
                    cnt++;
                }
                if(a==1) break;
            }
            if(cnt>bc){
                bc=cnt;
                bn=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l2,h2,bn,bc);
    }
    return 0;
}

