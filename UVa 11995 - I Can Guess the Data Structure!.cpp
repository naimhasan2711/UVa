#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,a,x;
    while(cin>>n)
    {

        stack<int>s;
        queue<int>q;
        priority_queue<int>pq;
        bool is=true,iq=true,ipq=true;
        for(i=0; i<n; i++)
        {
            cin>>a>>x;
            switch(a)
            {
            case 1:
                if(is)
                {
                    s.push(x);
                }
                if(iq)
                {
                    q.push(x);
                }
                if(ipq)
                {
                    pq.push(x);
                }
                break;

            case 2:
                if(is)
                {
                    if(s.empty() || s.top()!=x)
                    {
                        is=false;
                    }
                    else
                    {
                        s.pop();
                    }
                }
                if(iq)
                {
                    if(q.empty() || q.front()!=x)
                    {
                        iq=false;
                    }
                    else
                    {
                        q.pop();
                    }
                }
                if(ipq)
                {
                    if(pq.empty() || pq.top()!=x)
                    {
                        ipq=false;
                    }
                    else
                    {
                        pq.pop();
                    }
                }
                break;
            }

        }
        if(is==true && iq!=true && ipq!=true)
        {
            cout<<"stack\n";
        }
        else if(is!=true && iq==true && ipq!=true)
        {
            cout<<"queue\n";
        }
        else if(is!=true && iq!=true && ipq==true)
        {
            cout<<"priority queue\n";
        }
        else if(is!=true && iq!=true && ipq!=true)
        {
            cout<<"impossible\n";
        }
        else
        {
            cout<<"not sure\n";
        }
    }
    return 0;
}
