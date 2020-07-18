#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i = 1, n;

    cin >> n;

    while(i < n)
    {
        if(i % 2 == 1)
            cout << "I hate that ";
        else
            cout << "I love that ";

            i++;
    }

    if(n % 2 == 1)
        cout << "I hate it";
    else
        cout << "I love it";

    return 0;
}
