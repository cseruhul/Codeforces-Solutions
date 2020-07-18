#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, counter = 0;
    long long n, x;

    cin >> n >> x;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i*j == x)
                counter++;
        }
    }

    cout << counter << endl;


    return 0;
}
