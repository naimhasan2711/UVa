#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,sum,num,temp1,temp2;

    while(cin>>n)
    {
        while(n--)
        {
            sum=0;
          for(k=0;k<4;k++)
          {
              cin>>num;
              sum+=num%10;
              sum+=(num/100)%10;
              num/=10;
              temp1=num%10;
              temp1=temp1*2;
              sum+=(temp1%10)+(temp1/10);
              num/=100;
              temp2=num*2;
              sum+=(temp2%10)+(temp2/10);
          }
          if(sum%10==0){
            printf("Valid\n");
          }
          else {
            printf("Invalid\n");
          }
        }
    }
    return 0;
}
