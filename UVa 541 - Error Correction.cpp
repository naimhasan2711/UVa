/*bishmillahi rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mat[100][100];
    int r[100],c[100];
    int n,i,j,k,l,m,c_row,c_col,v_col,v_row;
    while(cin>>n && n!=0)
    {
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                cin>>mat[i][j];
            }
        }


        for(i=1;i<=n;i++)
        {
            int sum_row=0;
            for(j=1;j<=n;j++){
                sum_row+=mat[i][j];
            }
            r[i]=sum_row;
        }


        for(j=1;j<=n;j++)
        {
            int sum_col=0;
            for(i=1;i<=n;i++){
                sum_col+=mat[i][j];
            }
            c[j]=sum_col;
        }
        c_row=0;
        v_row=0;
        for(m=1;m<=n;m++)
        {
          if(r[m]%2!=0){
            c_row++;
            v_row=m;
          }
        }
        c_col=0;
        v_col=0;
        for(m=1;m<=n;m++)
        {
            if(c[m]%2!=0){
                c_col++;
                v_col=m;
            }
        }
        if(c_col==0 && c_row==0){
            printf("OK\n");
        }
        else if(c_col==1 && c_row==1){
            printf("Change bit (%d,%d)\n",v_row,v_col);
        }
        else if(c_col>1 || c_row>1){
            printf("Corrupt\n");
        }

    }
    return 0;
}
