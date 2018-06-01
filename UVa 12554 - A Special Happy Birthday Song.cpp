/*bishmillahi rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,a,b,c,d;
    string song[]= {"Happy","birthday","to","you","Happy","birthday","to","you",
                    "Happy","birthday","to","Rujia","Happy","birthday","to","you"
                   };
    string p[110];
    while(cin>>n)
    {
        for(l=0; l<n; l++)
        {
            cin>>p[l];
        }

        if(n<=16) a=1;
        else if(n<=32) a=2;
        else if(n<=48) a=3;
        else if(n<=64) a=4;
        else if(n<=80) a=5;
        else if(n<=96) a=6;
        else a=7;
        b=0;

        for(i=0; i<a; i++)
        {
            for(j=0; j<16; j++)
            {
                cout<<p[b%n]<<": "<<song[j]<<endl;
                b++;
            }
        }
    }
    return 0;
}
