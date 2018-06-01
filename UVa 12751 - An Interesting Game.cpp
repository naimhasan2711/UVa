#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    long long int numbers,cnt,select,i,j,x,sum,test;
    while(scanf("%lld",&test)==1)
    {
        for(i=1;i<=test;i++)
        {
            scanf("%lld %lld %lld",&numbers,&cnt,&select);
            x=(numbers*(numbers+1))/2;

            sum=0;

            for(j=1;j<=cnt;j++){

                sum+=select;

                 select++;

            }

            printf("Case %lld: %lld\n",i,(x-sum));
        }
    }
    return 0;
}
