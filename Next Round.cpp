#include<iostream>

using namespace std;

int main()
{
    int n, k, a, i = 0, c = 0, ar[100];
    cin >> n >> k;
    a = n;
    while(n--)
    {
        cin >> ar[i];
        i++;
    }

    for(i = 0; i < a; i++)
    {
        if((ar[i] >= ar[k - 1]) && (ar[i] > 0))
            c++;
    }
        cout << c << endl;

    return 0;
}
