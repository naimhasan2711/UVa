#include<bits/stdc++.h>
using namespace std;
int test(int n)
{
    if(n==1) return 1;
    int result=n;
    if(n%2==0){
        result-=(result/2);
        while(n%2==0){
            n/=2;
        }
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            result-=(result/i);
            while(n%i==0){
                n=n/i;
            }
        }
    }
    if(n>1){
        result-=(result/n);
    }
    return result;
}
int main()
{
   int number;
   while(cin>>number && number!=0)
   {
       cout<<test(number)<<endl;
   }
   return 0;
}
