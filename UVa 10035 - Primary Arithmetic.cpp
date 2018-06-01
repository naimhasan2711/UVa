#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int num1,num2,rem1,rem2,cnt,carry;
    while(cin>>num1>>num2)
    {
        if(num1==0 && num2==0){break;}
        cnt=0,carry=0;
        while(num1>0||num2>0){
            carry=(num1%10)+(num2%10)+carry;
            if(carry>=10) cnt++;
            carry=carry/10;
            num1=num1/10;
            num2=num2/10;
        }
        if(cnt==0){
            printf("No carry operation.\n");
        }
        else if(cnt==1){
            printf("1 carry operation.\n");
        }
        else{
            printf("%d carry operations.\n",cnt);
        }
    }
    return 0;
}