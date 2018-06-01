#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[140];
    while(gets(s))
    {
        int count = 0;
        for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                count += s[i] - '0';
            }
            else if(s[i] == 'b')
            {
                for(int j = 0; j < count; j++)
                    printf(" ");
                count = 0;
            }
            else if(s[i] == '!')
            {
                printf("\n");
            }
            else
            {
                for(int j = 0; j < count; j++)
                    printf("%c", s[i]);
                count = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
