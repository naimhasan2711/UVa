 ***************uva_12895****************
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{

   long long int a,t,c,n,i,b,j,k,sum,rs,r;
   cin>>t;
   while(t--){
    cin>>n;
    a=n;
    b=n;
    c=0;
    while(a>0){
        a=a/10;
        c++;
    }
    sum=0;
    while(n!=0){
        r=n%10;

        rs=pow(r,c);

        n=n/10;

        sum=sum+rs;


    }


   if(sum==b){
    printf("Armstrong\n");
   }
   else{
    printf("Not Armstrong\n");
   }

   }
    return 0;
}

