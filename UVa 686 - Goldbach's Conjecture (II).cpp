#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
#define max 50000
int prime[max];
int  seive()
{
     int i,j,s;
    for(i=2;i<=max;i++){
        prime[i]=1;
    }
    s=sqrt(max);
    for(i=2;i<=s;i++){
        if(prime[i]==1){
            for(j=i*2;j<=max;j+=i){
                prime[j]=0;
            }
        }
    }
}

int main()
{
    int n,i,j,c,a,temp;
    seive();
    while(scanf("%d",&n)==1)
    {
        if(n==0){break;}
        int c=0;
        for(i=2;i<=n/2;i++){
            if(prime[i]==1 && prime[n-i]==1){
                c++;

            }
        }
        cout<<c<<endl;

    }
    return 0;
}
