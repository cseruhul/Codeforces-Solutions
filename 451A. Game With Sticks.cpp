#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    if(n <= m)
    {
        if(n % 2 == 0)
            cout << "Malvika" << endl;
        else
            cout << "Akshat" << endl;
    }else if(n > m){
         if(m % 2 == 0)
            cout << "Malvika" << endl;
        else
            cout << "Akshat" << endl;
    }
/*
    if(n % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;
*/

    return 0;
}
