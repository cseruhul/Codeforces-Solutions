#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[1000];
    cin >> str;

    int n = strlen(str);
    if((n > 0) && (n < 1000))
    {
        if((str[0] >= 97) && (str[0] <= 122))
        {
            str[0] = str[0] - 32;
        }
    }


    cout << str;
    return 0;
}
