#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int xa,ya,radious,hyp,test;
    float res,maxi,mini;
   while(cin>>test)
   {
       while(test--)
       {
           scanf("%lld %lld %lld",&xa,&ya,&radious);
           res=sqrt((xa*xa)+(ya*ya));
           mini=float(radious-res);
           maxi=float(radious+res);
           printf("%.2f %.2f\n",mini,maxi);
       }
   }
    return 0;
}
