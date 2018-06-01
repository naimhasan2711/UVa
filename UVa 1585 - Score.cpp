#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,length,sum,s,test;
    string score;

    cin>>test;
        while(test--)
        {
            cin>>score;
            length=score.size();
            sum=0;
            s=1;
            for(i=0;i<length;i++){
                if(score[i]=='O'){
                    sum=sum+s;
                    s++;
                }
                else if(score[i]=='X'){
                    s=1;
                }
            }
            printf("%d\n",sum);
        }

    return 0;
}
