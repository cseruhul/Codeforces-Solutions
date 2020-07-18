#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[150], b[150];

    gets(a);
    gets(b);

    strrev(a);

    if(strcmp(a, b) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
