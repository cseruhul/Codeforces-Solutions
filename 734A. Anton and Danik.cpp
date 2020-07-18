#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ar[100005];
    int n, i, A = 0, D = 0;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i] == 'A')
            A++;
        else if(ar[i] == 'D')
            D++;
    }

    if(A > D)
        cout << "Anton" << endl;
    else if( A < D)
        cout << "Danik" << endl;
    else if(A == D)
        cout << "Friendship" << endl;

    return 0;
}
