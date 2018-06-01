#include<bits/stdc++.h>
using namespace std;
int main()
{
    int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int n,save,i,j,key;
    while(cin>>n && n!=0)
    {
        save=n;
        int out[27]={0};
        while(n!=1)
        {
            i=n;j=0;
            while(i>1)
            {
                int cnt=0;
               while(i%prime[j]==0){
                    cnt++;
                    i=i/prime[j];
                }
                out[j]+=cnt;
                j++;
            }
            n--;
        }

        for(i=24;i>=0;i--){
            if(out[i]!=0){
                break;
            }

        }
        j=i;
        printf("%3ld! =", save);
        if(j>=15){
            key=0;
        }
        else{
           key=15;
        }
        for(i=0;i<=j;i++){
            printf("%3ld", out [i]);
            key++;
            if(key==15){
                printf("\n%6c",' ');
            }
        }
        cout<<endl;

    }
    return 0;
}
