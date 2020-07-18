#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    int i, ar[100000], number, counter = 0;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    number = ar[0];

    for(i = 1; i < n; i++)
    {
        if(number != ar[i])
        {
            number = ar[i];
            counter++;
        }
    }

    cout << counter+1;
//    for(i = 0; i < n; i++)
//    {
//        cout << ar[i] << " ";
//    }
    return 0;
}
