#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n, k;

    cin >> n >> k;

    if(n % 2 == 0){
        if(n/2 >= k)
        {
            cout << (k*2 -1);
        }
        else if(n/2 < k)
        {
            cout << (k*2 - n);
        }
    }
    else
    {
        if(n/2 + 1 >= k)
        {
            cout << (k*2 -1);
        }
        else if(n/2 < k)
        {
            cout << k*2 - (n + 1);
        }
    }

        return 0;
}
