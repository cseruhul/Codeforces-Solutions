#include<bits/stdc++.h>
using namespace std;
int comp(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b, c, one, two, three, four, five, n;

    cin >> a >> b >> c;

    one = a + b * c;
    two = a * ( b + c);
    three = a * b * c;
    four = (a + b) * c;
    five = a + b + c;

    n = comp(one, two);
    n = comp(n, three);
    n = comp(n, four);
    n = comp(n, five);

    cout << n;


    return 0;
}
