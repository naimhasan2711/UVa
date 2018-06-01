#include<bits/stdc++.h>
using namespace std;
int fact[20000];

int main()
{
  int i,j,f,n;
  fact[0]=fact[1]=1;
  f=1;
  for(i=2;i<=10000;i++){
    f=i*f;
    while(f%10==0)
        f=f/10;
    f=f%100000;
    fact[i]=f%10;
  }
  while(scanf("%d",&n)==1)
  {
      printf("%5d -> %d\n",n,fact[n]);
  }
  return 0;
}
