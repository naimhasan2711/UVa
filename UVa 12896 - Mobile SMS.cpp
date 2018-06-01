#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int l1[100],l2[100],result[100],i,n,test;
    while(cin>>test)
    {
     while(test--)
     {



    cin>>n;
    for(i=1;i<=n;i++){
        cin>>l1[i];

    }
    for(i=1;i<=n;i++)
        cin>>l2[i];
    for(i=1;i<=n;i++)
        result[i]=l1[i]*l2[i];
    for(i=1;i<=n;i++){
        if(l1[i]==1){
            if(l2[i]==1){
                printf(".");
            }
            else if(l2[i]==2){
                printf(",");
            }
            else if(l2[i]==3){
                printf("?");
            }
            else if(l2[i]==4){
                putchar('"');
            }
        }

       else if(l1[i]==2){
            if(l2[i]==1){
                printf("a");
            }
            else if(l2[i]==2){
                printf("b");
            }
            else if(l2[i]==3){
                printf("c");
            }

        }
        else if(l1[i]==3){
            if(l2[i]==1){
                printf("d");
            }
            else if(l2[i]==2){
                printf("e");
            }
            else if(l2[i]==3){
                printf("f");
            }

        }

        else if(l1[i]==4){
            if(l2[i]==1){
                printf("g");
            }
            else if(l2[i]==2){
                printf("h");
            }
            else if(l2[i]==3){
                printf("i");
            }

        }

        else if(l1[i]==5){
            if(l2[i]==1){
                printf("j");
            }
            else if(l2[i]==2){
                printf("k");
            }
            else if(l2[i]==3){
                printf("l");
            }

        }
        else if(l1[i]==6){
            if(l2[i]==1){
                printf("m");
            }
            else if(l2[i]==2){
                printf("n");
            }
            else if(l2[i]==3){
                printf("o");
            }

        }
        else if(l1[i]==7){
            if(l2[i]==1){
                printf("p");
            }
            else if(l2[i]==2){
                printf("q");
            }
            else if(l2[i]==3){
                printf("r");
            }
            else if(l2[i]==4){
                printf("s");
            }
        }

        else if(l1[i]==8){
            if(l2[i]==1){
                printf("t");
            }
            else if(l2[i]==2){
                printf("u");
            }
            else if(l2[i]==3){
                printf("v");
            }

        }

        else if(l1[i]==9){
            if(l2[i]==1){
                printf("w");
            }
            else if(l2[i]==2){
                printf("x");
            }
            else if(l2[i]==3){
                printf("y");
            }
            else if(l2[i]==4){
                printf("z");
            }
        }
        else if(l1[i]==0){
            printf(" ");
        }

    }
    printf("\n");
    }
}
    return 0;
}
