#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,b,rem,s;
   while(cin>>n)
   {
       b=n;

       s=0;
       while(b>=3){
     r=b/3;
     s=s+r;
     rem=b%3;
    b=r+rem;
       }

   if(b==2){
    cout<<(s+1+n)<<endl;
   }
   else{
    cout<<s+n<<endl;
   }
   }

    return 0;
}