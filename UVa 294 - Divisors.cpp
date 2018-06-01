#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,low,up,maxi,i,j,num;
    double s,divisor;
    while(cin>>test)
    {
        while(test--)
        {
            cin>>low>>up;
            maxi=0;
            for(i=low; i<=up; i++)
            {
                divisor=0;
                s=sqrt(i);
                for(j=1; j<=s; j++)
                {
                    if(i%j==0)
                    {
                        divisor++;

                        if(j<s)
                        {
                            divisor++;
                        }
                    }
                }
                if(divisor>maxi)
                {
                    maxi=(int)divisor;
                    num=i;
                }
            }
            printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",low,up,num,maxi);
        }
    }
    return 0;
}
