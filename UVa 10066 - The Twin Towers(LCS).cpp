#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test=0,i,j,k,n1,n2,a1[110],a2[110],a[110][110];
    while(scanf("%d %d",&n1,&n2)==2)
    {

        if(n1==0 && n2==0){break;}
        for(k=0;k<n1;k++){
            scanf("%d",&a1[k]);
        }
        for(int l=0;l<n2;l++){
            scanf("%d",&a2[l]);
        }
        printf("Twin Towers #%d\n",++test);
        for(i=0;i<=1;i++){
            for(j=0;j<=n2;j++){
             a[i][j]=0;

         }
        }

        for(i=0;i<=n1;i++){
            for(j=0;j<=1;j++){
             a[i][j]=0;

         }
        }

        for(i=1;i<=n1;i++){
            for(j=1;j<=n2;j++){

                if(a1[i-1]==a2[j-1]){
                    a[i][j]=a[i-1][j-1]+1;
                }
                else if(a[i-1][j]>=a[i][j-1]){
                    a[i][j]=a[i-1][j];
                }
                else{
                    a[i][j]=a[i][j-1];
                }
            }
        }
        cout<<"Number of Tiles : "<<a[n1][n2]<<endl<<endl;
    }
    return 0;
}
