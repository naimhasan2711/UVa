#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char tex[1000];
    long long int num[1000],i,sum,l;
    while(gets(tex))
    {
        sum=0;
       l=strlen(tex);

       for(i=0;i<l;i++){
        num[i]=tex[i]-'0';
       }
       reverse(num,num+l);
       for(i=0;i<l;i++){
        sum=sum+num[i]*(pow(2,i+1)-1);
       }
       if(sum==0){break;}
       else
       printf("%lld\n",sum);
    }
    return 0;
}