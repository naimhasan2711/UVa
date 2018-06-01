#include<bits/stdc++.h>
using namespace std;
long long int D(long long int n){
    if(n<=1) return 0;
    else if(n==2) return 1;
    else return (n-1)*(D(n-1) + D(n-2));
}
long long int fact(long long int n1)
{
    if(n1==0) return 1;
    else return n1*fact(n1-1);
}
int main()
{

   long long int t,n,r1,r2;
   while(cin>>t)
   {
       while(t--)
       {
           cin>>n;
           r1=D(n);
           r2=fact(n);
           cout<<r1<<"/"<<r2<<endl;
       }
   }

    return 0;
}
