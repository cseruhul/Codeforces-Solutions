#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char ar[1000], temp;
    int n, i, j;
    cin >> ar;

    n = strlen(ar);

    if(n <= 100)
    {
        for(i = 0; i < n; i += 2)
        {
            for(j = 0; j < n - 1; j += 2)
            {
                if(ar[j] >= ar[j+2])
                {
                    temp = ar[j];
                    ar[j] = ar[j+2];
                    ar[j+2] = temp;
                }
            }
        }
    cout << ar;
    }


    return 0;
}
