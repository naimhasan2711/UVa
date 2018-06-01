#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
#define max 1000000
int prime[max];

long isprime()
{
     int i,j;
     for(i=0;i<=max;i++)
     prime[i]=1;

     for(i=2;i<sqrt(max);i++)
        {
        for(j=i*2;j<=max;j+=i)
              {
              prime[j]=0;
              }
        }
}

int main()
{
    int n,i,a;
    isprime();
    while(scanf("%d",&n)==1)
    {
    if(n==0)
    {
    break;
    a=0;
    }
    else
        {
            for(i=2;i<max;i++)
            {
            if(prime[i]==1 && prime[n-i]==1)
                           {
                           a++;

                           break;
                           }
           }
           if(a==0)
           printf("Goldbach's conjecture is wrong.\n");
           else
           printf("%d = %d + %d\n",n,i,n-i);
        }
    }
    return 0;
}
