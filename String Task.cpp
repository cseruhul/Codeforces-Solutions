#include<bits\stdc++.h>

using namespace std;

int main()
{
    char ch[101];
    cin >> ch;

    int n = strlen(ch);

    for(int i = 0; i < n; i++)
    {
        switch(ch[i])
        {
        case 'A':
            ch[i] = '0';
            break;
        case 'O':
            ch[i] = '0';
            break;
        case 'Y':
            ch[i] = '0';
            break;
        case 'E':
            ch[i] = '0';
            break;
        case 'U':
            ch[i] = '0';
            break;
        case 'I':
            ch[i] = '0';
            break;
        case 'a':
            ch[i] = '0';
            break;
        case 'e':
            ch[i] = '0';
            break;
        case 'y':
            ch[i] = '0';
            break;
        case 'o':
            ch[i] = '0';
            break;
        case 'u':
            ch[i] = '0';
            break;
        case 'i':
            ch[i] = '0';
            break;
        }

        if (ch[i] >= 'A' && ch[i] <= 'Z') {
         ch[i] = ch[i] + 32;
      }
    }
    for(int j = 0; j < n; j++)
    {
        if(ch[j] != '0')
            cout << "." << ch[j];
    }
    return 0;
}
