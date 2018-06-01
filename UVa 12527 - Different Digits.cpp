/*bishmillahi rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l,a,b,c,d,cnt,mi,mx,flag,arr[15];
    while(cin>>n>>m)
    {
        cnt=0;
        mi=min(n,m);
        mx=max(n,m);
        for(i=mi;i<=mx;i++)
        {
            a=i;
            c=0;
            while(a>0)
            {
                arr[c++]=a%10;
                a=a/10;
            }
            flag=0;
            for(j=0;j<c-1;j++){
                for(k=j+1;k<c;k++){
                    if(arr[j]==arr[k]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1){
                    break;
                }
            }
            if(flag==0){
                cnt++;
            }
            memset(arr,0,sizeof(arr));
        }
        cout<<cnt<<endl;
    }
    return 0;
}
