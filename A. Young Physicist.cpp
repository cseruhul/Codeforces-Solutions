#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[3] = {0, 0, 0}, x, y, z, n;
    cin >> n;

    while(n--)
    {
        cin >> x >> y >> z;
        ar[0] += x;
        ar[1] += y;
        ar[2] += z;
    }

    if((ar[0] == 0) && (ar[1] == 0) && (ar[2] == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
