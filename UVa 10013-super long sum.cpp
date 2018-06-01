#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,carry,n,m,r,r1;
    int a[10000],b[10000],c[10000];
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
        printf("\n");
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
        int cnt=0;
        for(k=1;k<=m;k++)
        {
            if(c[k]!=0) break;
            else cnt++;
            //printf("%d",c[k]);
        }
        for(i=cnt+1;i<=m;i++){
            printf("%d",c[i]);
        }
        printf("\n");
    }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,carry,n,m,r,r1;
    int a[10000],b[10000],c[10000];
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
        printf("\n");
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
        int cnt=0;
        for(k=1;k<=m;k++)
        {
            if(c[k]!=0) break;
            else cnt++;
            //printf("%d",c[k]);
        }
        for(i=cnt+1;i<=m;i++){
            printf("%d",c[i]);
        }
        printf("\n");
    }
    }
    return 0;
}
