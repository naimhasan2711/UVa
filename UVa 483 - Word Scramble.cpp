#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
   int i,j,a,c,l;
   char n[1001];
    while(scanf("%s",n)==1)
    {
        c=getchar();
        
        for(i=strlen(n)-1;i>=0;i--){
            printf("%c",n[i]);
        }
        putchar(c);

    }
    return 0;
}
