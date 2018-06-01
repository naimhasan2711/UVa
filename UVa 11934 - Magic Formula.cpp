#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    long long int a,b,i,c,d,L,f,cnt;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0){break;}
        f=0;
        cnt=0;
        for(i=0;i<=L;i++){
            f=(a*i*i)+(b*i)+c;
            if(f%d==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
