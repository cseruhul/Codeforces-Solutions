#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, counter = 0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %d", &p, &q);

        if((q - p) >= 2)
        counter++;

    }

    cout << counter << endl;

    return 0;
}
