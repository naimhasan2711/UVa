/*bishmillahi rahmanir rahim*/
#include<bits/stdc++.h>
#define max 1000000
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
    int n,c,i,j,l,mid,a,i1,i2;
    vector<int>prime;
    seive();
    while(cin>>n>>c)
    {
        for(i=1;i<=n;i++){
            if(mark[i]==0){
                prime.push_back(i);
            }
        }
        l=prime.size();
        l--;
        mid=l/2;
        if((c*2)>(l+1)){
            i1=0;
            i2=l;
        }
        else{
            if(l%2!=0){
            i1=mid-(c-1);
            i2=mid+c;
        }
        else{
            i1=mid-(c-1);
            i2=mid+(c-1);
        }
        }
        printf("%d %d:",n,c);
        for(j=i1;j<=i2;j++){
            printf(" %d",prime[j]);
        }
        printf("\n\n");

        prime.clear();
    }
    return 0;
}
