#include<bits/stdc++.h>
using namespace std;

int ar[105];

int main()
{
    int i, n, x, X, y, Y, counter = 0;

    cin >> n;

    cin >> x;

    for(i = 1; i <= x; i++)
    {
        cin >> X;
        ar[X] = 1;
    }


    cin >> y;

    for(i = 1; i <= y; i++)
    {
        cin >> Y;
        ar[Y] = 1;
    }

    for(i = 1; i <= n; i++)
    {
        if(ar[i] != 0)
            counter++;
    }

    if(counter == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}
