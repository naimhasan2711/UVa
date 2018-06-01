/*bishmillahi rahmanir rahim */
#include<bits/stdc++.h>
int num[10];
using namespace std;
int main()
{
    int test,n,i,j,k,l,m,o;
    while(cin>>test)
    {
        while(test--)
        {
            cin>>n;
            memset(num,0,sizeof(num));
            for(i=1;i<=n;i++)
            {
                m=i;
                while(m!=0)
                {
                    num[m%10]++;
                    m=m/10;
                }
            }
            for(i=0;i<10;i++){
                if(i!=0) cout<<" ";
                cout<<num[i];
            }
           cout<<endl;
        }
    }
    return 0;
}

