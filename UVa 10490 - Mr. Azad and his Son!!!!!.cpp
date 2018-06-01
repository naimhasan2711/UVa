/*bishmillahi rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,a,b,c;
    while(cin>>test && test)
    {
        if(test==11 || test==23 || test==29){
            printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else if(test==4 || test==6 || test==8 ||
                test==9 || test==10 || test==12 ||
                test==14 || test==15 || test==16 ||
                test==18 || test==20 || test==21||
                test==22 || test==24 || test==25||
                test==26 || test==27 || test==28||test==30){
                printf("Given number is NOT prime! NO perfect number is available.\n");
                  }
        else{
            a=pow(2,test-1);
            b=pow(2,test);
            c=a*(b-1);
            printf("Perfect: %lld!\n",c);
        }
    }
    return 0 ;
}
