#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test,n,i,j,l;
    string s;

    cin>>test;


    getline(cin,s);

    while(test--)
    {
        stack<char>my_stack;
        getline(cin,s);
        l=s.size();
        for(i=0; i<l; i++)
        {
            if((s[i]==')') && (!my_stack.empty()) && (my_stack.top()=='('))
            {
                my_stack.pop();
            }
            else if((s[i]==']') && (!my_stack.empty()) && (my_stack.top()=='['))
            {
                my_stack.pop();
            }
            else
            {
                my_stack.push(s[i]);
            }
        }
        if(my_stack.empty())
        {
            cout<<"Yes\n";

        }
        else if(!my_stack.empty())
        {
            cout<<"No\n";
            //cout<<my_stack.top()<<endl;
        }

    }



    return 0;
}


