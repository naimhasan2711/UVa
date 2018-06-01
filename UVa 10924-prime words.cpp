#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<algorithm>
#define max 1000000
using namespace std;
int prime[max];
long seive()
{
    long int i,j,s;
    for(i=1;i<=max;i++){
        prime[i]=1;
    }
    s=sqrt(max);
    for(i=2;i<=s;i++){
        if(prime[i]==1){
            for(j=i*2;j<=max;j+=i){
                prime[j]=0;
            }
        }
    }
}

int main()
{
   char word[55];
   seive();
   long i,j,length,v;
   while(1==scanf("%s",word))
   {
       length=strlen(word);
       for(i=0;i<length;i++){

        if(word[i]>='a' && word[i]<='z'){
            word[i]=word[i]-96;
        }
        else if(word[i]>='A' && word[i]<='Z'){
            word[i]=word[i]-38;
        }
       }
       v=0;
       for(i=0;i<length;i++){
        v=v+word[i];
       }

       if(prime[v]==1){
        printf("It is a prime word.\n");
       }
       else{
        printf("It is not a prime word.\n");
       }
   }
    return 0;

}
