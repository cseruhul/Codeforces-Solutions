#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, h, counter = 0, man;

    cin >> n >> h;

    while(n)
    {
        cin >> man;
        if(man <= h)
            counter++;
        if(man > h)
            counter += 2;
        n--;
    }

    cout << counter << endl;

    return 0;
}
