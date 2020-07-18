#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, result = 0;
    cin >> t;

    while(t--)
    {
        cin >> n;
        if(n % 2 == 1)
            cout << n / 2 << endl;
        else
            cout << n / 2 - 1 << endl;

    }

    return 0;
}
