#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target[1010],i;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        while(true)
        {

            cin>>target[0];
            if(target[0]==0)
            {
                cout<<endl;
                break;
            }
            for(i=1; i<n; i++)
            {
                cin>>target[i];
            }
            int c=1,index=0;
            stack<int>my_stack;
            while(c<=n)
            {
                my_stack.push(c);
                while(!my_stack.empty() && my_stack.top()==target[index])
                {
                    my_stack.pop();
                    index++;
                    if(index>=n)
                    {
                        break;
                    }
                }
                c++;
            }
            if(!my_stack.empty())
            {
                cout<<"No\n";
            }
            else
            {
                cout<<"Yes\n";
            }
        }
    }
    return 0;
}
