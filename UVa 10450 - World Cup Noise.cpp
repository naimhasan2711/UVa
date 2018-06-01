#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,t,f,num;
    vector<long long int>fibs;
    while(cin>>test)
    {
        for(t=1;t<=test;t++)
        {
            cin>>num;
            fibs.push_back(0);
            fibs.push_back(1);
            fibs.push_back(1);
            for(f=3;f<=70;f++){
                fibs.push_back(fibs[f-1]+fibs[f-2]);
            }
            printf("Scenario #%d:\n",t);
            if(num==0){
                cout<<0<<endl<<endl;
            }
            else if(num==1){
                cout<<2<<endl<<endl;
            }
            else if (num==2){
                cout<<3<<endl<<endl;
            }
            else if(num==3){
                cout<<5<<endl<<endl;
            }
            else if(num==4){
                cout<<8<<endl<<endl;
            }
            else{
                cout<<fibs[num+2]<<endl<<endl;
            }
            fibs.clear();
        }
    }
    return 0;
}
