#include<bits/stdc++.h>
using namespace std;
long long int arr[1000010];
int main()
{
   long long int num,i;
   arr[3]=0;
   for(i=4;i<1000010;i++){
        arr[i]=arr[i-1]+(((i-1)*(i-2))/2-(i-1)/2)/2;
       }
   while(cin>>num)
   {
       if(num<3) break;
       cout<<arr[num]<<endl;
   }

   return 0;
}
