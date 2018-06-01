#include<bits/stdc++.h>
#define max 1000000
int mark[max];
using namespace std;
void seive()
{
    int i,j,s;
    for(i=2; i<=max; i++)
    {
        mark[i]=0;
    }
    s=sqrt(max);
    for(i=2; i<=s; i++)
    {
        if(mark[i]==0)
        {
            for(j=2*i; j<=max; j=j+i)
            {
                mark[j]=1;
            }
        }
    }
}

int main()
{
    seive();
    vector<int>p;
    int i,j,n,x,y;
    p.clear();
    for(int a=2; a<=32010; a++)
    {
        if(mark[a]==0)
        {
            p.push_back(a);
        }
    }
    while(cin>>x>>y)
    {
        if(x==0 && y==0) break;
        if(x>y) swap(x,y);
        size_t i=0;
        while(p[i]<x){
            i++;
        }
        while(p[i+2]<=y){
            if(p[i+2]-p[i+1]==p[i+1]-p[i]){
                int fst=i;
                int lst=i+2;
                int dif=p[i+1]-p[i];
                while(i+3<=p.size() && p[i+3]-p[i+2]==dif){
                    lst++;
                    i++;
                }
                if(p[lst]<=y){

                  if(fst==0 || p[fst]-p[fst-1]!=dif){
                    cout<<p[fst];
                    for(int t=fst+1;t<=lst;t++){
                        cout<<" "<<p[t];
                    }
                    cout<<endl;
                  }
                }
                else{
                    break;
                }
            }
            i++;
        }
    }

    return 0;
}

