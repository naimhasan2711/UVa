#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,g,i,m,r,t,j,n;
    string p;
    while(cin>>n){
            while(n--){
                    cin>>p;
     int l=p.length();
     a=0,g=0,i=0,m=0,r=0,t=0;
     for(j=0;j<l;j++){
        if(p[j]=='A') a++;
        if(p[j]=='G') g++;
        if(p[j]=='I') i++;
        if(p[j]=='M') m++;
        if(p[j]=='R') r++;
        if(p[j]=='T') t++;
     }


     int cnt=0;
     while(1)
     {
         if(a>=3 && g>=1 && i>=1 && m>=1 && r>=2 && t>=1){
            cnt=cnt+1;
            a=a-3;
            g=g-1;
            i=i-1;
            m=m-1;
            r=r-2;
            t=t-1;
         }
         else{
            break;
         }
     }
     printf("%d\n",cnt);
    }
    }
    return 0;
}
