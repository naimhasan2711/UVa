#include<bits/stdc++.h>
using namespace std;
#define mx 6227020800
long long factorial(long long n)
{
    if(n==0) return 1;
    else
        return n*factorial(n-1);
}
int main()
{
   long long int n,i,res;
    while(cin>>n)
    {
        if(n>=14){printf("Overflow!\n");}
        else if(n>=0 && n<=7){printf("Underflow!\n");}
        else if(n>=8 && n<=13){printf("%lld\n",factorial(n));}
        else if(n<0 && (n%2!=0)){printf("Overflow!\n");}
        else if(n<0 && (n%2==0)){printf("Underflow!\n");}


    }

    return 0;
}
