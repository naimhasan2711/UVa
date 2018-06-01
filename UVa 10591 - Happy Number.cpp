/*bishmillahi rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int number(int n)
{
    int m,s,r;
    s=0;
    while(n!=0)
    {
        m=n%10;
        s+=m*m;
        n=n/10;
    }
    return s;
}

int main()
{
    int n,test,t,a;
    while(cin>>test)
    {

        for(t=1;t<=test;t++)
        {
            cin>>n;
            a=number(n);
        while(a>9)
        {
            a=number(a);
        }

            if(a==1){
                printf("Case #%d: %d is a Happy number.\n",t,n);
            }
            else{
                printf("Case #%d: %d is an Unhappy number.\n",t,n);
            }
        }

    }

    return 0;
}
