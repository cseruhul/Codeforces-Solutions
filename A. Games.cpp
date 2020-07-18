#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h[105], a[105], i = 0, j, counter = 0;
    cin >> n;

    while(i < n)
    {
        cin >> h[i] >> a[i];
        i++;
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
                continue;
            else if(h[i] == a[j])
                counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
