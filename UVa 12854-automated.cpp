#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,c,d;
    while(scanf("%d %d %d %d %d",&a1,&b1,&c1,&d1,&e1)!=EOF)
    {
        scanf("%d %d %d %d %d",&a2,&b2,&c2,&d2,&e2);
        c=0;
        if(a1!=a2) c++;
        if(b1!=b2) c++;
        if(c1!=c2) c++;
        if(d1!=d2) c++;
        if(e1!=e2) c++;

        if(c==5){
            printf("Y\n");

        }
        else
            printf("N\n");
    }
    return 0;
}
