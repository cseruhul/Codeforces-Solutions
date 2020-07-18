#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p;
    double sum = 0, result, m;

    cin >> n;
    m = n;
    while(n--)
    {
        cin >> p;
        sum += p;
    }

    result = float(sum / m);

    cout << result;
//    printf("%f", result);

    return 0;
}
