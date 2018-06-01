#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long unsigned int a,b,l,n,c=0;
    while(cin>>a>>l)
    {
        if(a==-1 && l==-1){break;}
        c++;
        n=0;
        b=a;
        while(b<=l)
        {



            if(b%2!=0){
                b=(b*3)+1;
                n++;

            }
            else{
                b=b/2;
                n++;

            }
            if(b==1){
                 n++;
                break;
            }
            if(b>l){

                break;
            }

        }
        cout<<"Case "<<c<<": A = "<<a<<", limit = "<<l<<", number of terms = "<<n<<endl;
    }
    return 0;
}