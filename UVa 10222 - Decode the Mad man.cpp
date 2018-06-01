#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define ei else if

int main()
{
    string s;
    int l;
    while(getline(cin,s))
    {
        l=s.length();
        for(int i=0; i<l; i++)
        {
            switch(s[i])
            {
            case ']':
                pf("p");
                break;
            case '[':
                pf("o");
                break;
            case 'p':
            case 'P':
                pf("i");
                break;
            case 'o':
            case 'O':
                pf("u");
                break;
            case 'i':
            case 'I':
                pf("y");
                break;
            case 'u':
            case 'U':
                pf("t");
                break;
            case 'y':
            case 'Y':
                pf("r");
                break;
            case 't':
            case 'T':
                pf("e");
                break;
            case 'r':
            case 'R':
                pf("w");
                break;
            case 'e':
            case 'E':
                pf("q");
                break;
            case 'w':
            case 'W':
                pf("w");
                break;
            case 'q':
            case 'Q':
                pf("q");
                break;
            case '"':
                pf("l");
                break;
            case ';':
            case ':':
                pf("k");
                break;
            case 'l':
            case 'L':
                pf("j");
                break;
            case 'k':
            case 'K':
                pf("h");
                break;
            case 'j':
            case 'J':
                pf("g");
                break;
            case 'h':
            case 'H':
                pf("f");
                break;
            case 'g':
            case 'G':
                pf("d");
                break;
            case 'f':
            case 'F':
                pf("s");
                break;
            case 'd':
            case 'D':
                pf("a");
                break;
            case '/':
            case '?':
                pf(",");
                break;
            case '.':
            case '>':
                pf("m");
                break;
            case ',':
            case '<':
                pf("n");
                break;
            case 'm':
            case 'M':
                pf("b");
                break;
            case 'n':
            case 'N':
                pf("v");
                break;
            case 'b':
            case 'B':
                pf("c");
                break;
            case 'v':
            case 'V':
                pf("x");
                break;
            case 'c':
            case 'C':
                pf("z");
                break;
            case 'x':
            case 'X':
                pf("x");
                break;
            case 'z':
            case 'Z':
                pf("z");
                break;
            case '\'':
                pf("l");
                break;
            case '=':
                pf("0");
                break;
            case '-':
                pf("9");
                break;
            case '0':
                pf("8");
                break;
            case '9':
                pf("7");
                break;
            case '8':
                pf("6");
                break;
            case '7':
                pf("5");
                break;
            case '6':
                pf("4");
                break;
            case '5':
                pf("3");
                break;
            case '4':
                pf("2");
                break;
            case '3':
                pf("1");
                break;
            case '2':
                pf("`");
                break;
            default:
                pf("%c",s[i]);
            }
        }
        pf("\n");

    }
    return 0;
}
