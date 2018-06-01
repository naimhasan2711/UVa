#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
int marbel[10005];
int qur[10005];
using namespace std;
int main()
{
    int n,q,i,j,k,loc,item,test;
    test=1;
    while(cin>>n>>q)
    {

        if(n==0 && q==0){break;}

        for(i=0;i<n;i++){
            scanf("%d",&marbel[i]);
        }
        for(i=0;i<q;i++){
                scanf("%d",&qur[i]);}
        sort(marbel,marbel+n);


          printf("CASE# %d:\n",test);
         for(j=0;j<q;j++)
         {
              item=qur[j];
             loc=0;
             for(i=0;i<n;i++){
                if(marbel[i]==item){

                    printf("%d found at %d\n",item,i+1);
                    loc=1;
                    break;
                }

             }
             if(loc==0){
                printf("%d not found\n",item);
             }
         }
         test++;
    }
    return 0;
}
