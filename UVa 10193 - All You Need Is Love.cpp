#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int convert(string s)
{
    int res=0,l=s.size(),i,j;
    for(i=l-1,j=0;i>=0;i--,j++)
    {
        res+=((s[i]-'0')*pow(2,j));
    }
    return res;
}
int main()
{
    int test,t,l1,l2,d1,d2,r;
    string s1,s2;
    while(cin>>test)
    {
        for(t=1;t<=test;t++)
        {
            cin>>s1;
            cin>>s2;
            d1=convert(s1);
            d2=convert(s2);
            r=gcd(d1,d2);
            if(r>1){
                printf("Pair #%d: All you need is love!\n",t);
            }
            else{
                printf("Pair #%d: Love is not all you need!\n",t);
            }


        }
    }
    return 0;
}
