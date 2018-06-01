#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,p,c,in[110];
    string a,b[110];
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            cin>>n;
            p=0;
            for(i=1;i<=n;i++)
            {
                cin>>a;
                if(a=="RIGHT"){
                    p++;
                    b[i]="RIGHT";
                }
                else if(a=="LEFT"){
                    p--;
                    b[i]="LEFT";
                }
                else{
                    cin>>a;
                    cin>>c;
                    if(b[c]=="LEFT"){
                       p--;
                       b[i]=b[c];
                    }
                    else{
                        p++;
                        b[i]=b[c];
                    }
                }
            }
            cout<<p<<endl;
        }
    }
    return 0;
}
