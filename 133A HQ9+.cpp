#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, m = 0;
    char ch[105];

    cin >> ch;

    n = strlen(ch);

    for(i = 0; i < n; i++)
    {
        if((ch[i] == 'H') || (ch[i] == 'Q') || (ch[i] == '9'))
        {
            m = 1;
        }
    }

    if(m == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
