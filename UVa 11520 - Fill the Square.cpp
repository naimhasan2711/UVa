#include<bits/stdc++.h>
using namespace std;

int main()
{
   int i,j,test,t,n,k;
   char s[11][11];
   while(cin>>test)
   {
       for(t=1;t<=test;t++)
       {

           cin>>n;
           for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>s[i][j];
            }
           }
           cout<<"Case "<<t<<":"<<endl;
           for(i=0;i<n;i++)
           {
               for(j=0;j<n;j++){
                if(s[i][j]=='.'){
                    for(k=65;;k++){
                        if(s[i][j-1]!=k && s[i][j+1]!=k && s[i-1][j]!=k && s[i+1][j]!=k){
                            s[i][j]=k;
                            break;
                        }
                    }
                }
                cout<<s[i][j];
               }
               cout<<endl;
           }


       }

   }
   return 0;
}
