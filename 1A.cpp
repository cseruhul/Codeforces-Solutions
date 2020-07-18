#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long long unsigned int n, m, a;

    cin >> n >> m >> a;
    if(((n >= 1) && (n <= pow(10, 9))) && ((m >= 1) && (m <= pow(10, 9))) && ((a >= 1) && (a <= pow(10, 9))))
    {
        if((n % a) != 0)
           n = n / a + 1;
        else
            n = n / a;
        if((m % a) != 0)
            m = m / a + 1;
        else
            m = m / a;
           cout << (m * n);
    }

    return 0;
}
