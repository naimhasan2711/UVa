#include<bits/stdc++.h>
int a[5000050],b[5000050],c[5000050];
using namespace std;
int main()
{
    int i,j,k,carry,cnt,n,x,m,r,r1;

    while(scanf("%d",&n)==1)
    {
        for(x=0;x<n;x++)
        {
       // printf("\n");
        scanf("%d",&m);
        for(i=1;i<=m;i++){
            cin>>a[i];
            cin>>b[i];
        }

        carry=0;
        for(j=m;j>=1;j--){
            r=a[j]+b[j]+carry;
            //cout<<r<<endl;
            if(j==1){
                c[j]=r;
            }
            else if(r>9){
                r1=r%10;
                carry=r/10;
                c[j]=r1;
            }
            else{
                r1=r;
                c[j]=r1;
                carry=0;
            }


        }
        cnt=0;
        for(i=1;i<=m;i++){
            if(c[i]!=0)
                break;
            else
                cnt++;
        }
        //cout<<cnt<<endl;
        for(k=cnt+1;k<=m;k++)
        {
            printf("%d",c[k]);
        }
        printf("\n");
        if(x!=n-1){
            printf("\n");
        }
    }
    }
    return 0;
}

