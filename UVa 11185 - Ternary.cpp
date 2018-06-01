#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,num;
    int rem,i,j,k,a[1000];
    while(cin>>num)
    {
        if(num<0){break;}
        n=num;

        j=0;
        while(num>0){
            rem=num%3;

            j++;
            num=num/3;

        }
        for(i=0;i<j;i++){
            rem=n%3;

            a[i]=rem;
            n=n/3;

        }
        if(j==0){printf("0");}
        for(i=j-1;i>=0;i--){
            cout<<a[i];
        }
        cout<<endl;

    }
    return 0;
}
