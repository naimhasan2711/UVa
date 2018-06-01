/*bismillahi rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f,current_height;
    int cnt;
    while(cin>>h>>u>>d>>f)
    {
        if(h==0) break;
        f=f*u/100;
        current_height=0;
        cnt=0;
        while(true)
        {
            cnt++;
            if(u>0){
                current_height+=u;
            }
            u-=f;
            if(current_height>h){
                break;
            }
            current_height-=d;
            if(current_height<0) break;
            //cnt++;
        }
        if(current_height<0){
            cout<<"failure on day "<<cnt<<endl;
        }
        else{
            cout<<"success on day "<<cnt<<endl;
        }
    }
    return 0;
}
