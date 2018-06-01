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
    long int i,j,s;
    for(i=1;i<=max;i++){
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
int palindrome(int n)
{
    int temp,rev=0,rem;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    return rev;
}
int main()
{
    int number,i,j;
    seive();
    while(cin>>number){
       j=palindrome(number);
       cout<<number*2<<endl;
       if(prime[number]==1 && number==j){
        break;
       }
    }
    return 0;
}
