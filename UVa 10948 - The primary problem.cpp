#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<algorithm>
#define max 1000000
using namespace std;
int prime[max];
long seive()
{
    long long i,j,s;
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
    long long int n,a,i,j;
    seive();
    while((scanf("%lld",&n))==1)
    {
        if(n==0){break;}
        a=0;
        for(i=2;i<=n;i++){

            if(prime[i]==1 &&prime[n-i]==1){
                a++;
                break;
            }
        }
        if(a==0){printf("%lld:\nNO WAY!\n",n);}
        else{
            printf("%lld:\n%lld+%lld\n",n,i,n-i);
        }
    }
    return 0;
}