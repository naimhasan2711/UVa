#include<bits/stdc++.h>
#define max 1000010
using namespace std;
long prime[max];
void seive()
{
    long i,j,n;
    for(i=2;i<=max;i++) prime[i]=1;
    n=sqrt(max);
    for(i=2;i<n;i++){
        if(prime[i]==1){
            for(j=i+i;j<=max;j+=i){
                prime[j]=0;
            }
        }
    }
}
int main()
{
     long n,n1,n2,m1,m2,res,dif,cnt,c;
     string a,b;
     //stringstream s;
     while(cin>>a){
            if(a=="0") break;
     n=atol(a.c_str());
     sort(a.begin(),a.end());
     n1=atol(a.c_str());
     reverse(a.begin(),a.end());
     n2=atol(a.c_str());
     printf("Original number was %ld\n",n);
     printf("%ld - %ld = %ld\n",n2,n1,n2-n1);
     dif=n2-n1;

     cnt=1;
     map<int,bool>mp;
     while(mp[dif]==false)
      {
          mp[dif]=true;
          stringstream s;

        s<<dif;
        b=s.str();
        sort(b.begin(),b.end());
        m1=atol(b.c_str());
        reverse(b.begin(),b.end());
        m2=atol(b.c_str());
        dif=m2-m1;
        printf("%ld - %ld = %ld\n",m2,m1,dif);
        cnt++;

      }
      printf("Chain length %ld\n\n",cnt);
     }
    return 0;
}

