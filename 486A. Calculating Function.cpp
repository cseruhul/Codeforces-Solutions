#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, sum = 0;
    int i;

    cin >> n;


    //-1+2-3+4-5+................+(-1)^n*n Formula
    sum = pow(-1, n) * (n+1) / 2;

//    for(i = 1; i <= n; i++)
//    {
//        if(i % 2 == 1)
//            sum -= i;
//        else if(i % 2 == 0)
//            sum += i;
//    }

    cout << sum << endl;

    return 0;
}
