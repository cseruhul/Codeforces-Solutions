#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch1[105], ch2[105], ch[105];
    int i, n;

    cin >> ch1;
    cin >> ch2;

    n = strlen(ch1);

    for(i = 0; i < n; i++)
    {
        if(ch1[i] != ch2[i])
            ch[i] = '1';
        else
            ch[i] = '0';
    }
    ch[i] = '\0';

    cout << ch;


    return 0;
}
