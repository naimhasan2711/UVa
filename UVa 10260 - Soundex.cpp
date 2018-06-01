#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int i,s,length;
    char soundex[20];
    while(gets(soundex))
    {
      length=strlen(soundex);

      for(i=0;i<length;i++)
      {
          if(soundex[i]=='C' || soundex[i]=='G' || soundex[i]=='J' || soundex[i]=='K' || soundex[i]=='Q' || soundex[i]=='S' || soundex[i]=='X' || soundex[i]=='Z'){
            if(soundex[i-1]!='C' && soundex[i-1]!='G' && soundex[i-1]!='J' && soundex[i-1]!='K' && soundex[i-1]!='Q' && soundex[i-1]!='S' && soundex[i-1]!='X' && soundex[i-1]!='Z'){
              printf("2");
            }
          }
          else if(soundex[i]=='B' || soundex[i]=='F' || soundex[i]=='P' || soundex[i]=='V'){
            if(soundex[i-1]!='B' && soundex[i-1]!='F' && soundex[i-1]!='P' && soundex[i-1]!='V'){
                printf("1");
            }
          }
          else if(soundex[i]=='D' || soundex[i]=='T'){
              if(soundex[i-1]!='D' && soundex[i-1]!='T'){
                printf("3");
              }

          }
          else if(soundex[i]=='M' || soundex[i]=='N'){
                if(soundex[i-1]!='M' && soundex[i-1]!='N'){
            printf("5");
                }
          }
          else if(soundex[i]=='L'){
                if(soundex[i-1]!='L'){
            printf("4");
          }
          }
          else if(soundex[i]=='R'){
            if(soundex[i-1]!='R'){
                printf("6");
            }
          }

      }
      printf("\n");
    }

    return 0;
}
