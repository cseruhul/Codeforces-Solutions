#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n, p, v, t, c = 0;

    cin >> n;

    while(n--)
    {
        cin >> p >> v >> t;
        if((p == 0 || p == 1) && (v == 0 || v == 1) && (t == 0 || t == 1))
        {
            if(((p == 1) && (v == 1)) || ((p == 1) && (t == 1)) || ((v == 1) && (t == 1)))
            {
                c++;
            }
        }
    }

    cout << c;

    return 0;
}
