#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ar[1005], ch = ' ';

    int i = 0, j, counter = 0, n;

    gets(ar);


    n = strlen(ar);

    for(i = 1; i < n - 1; i++)
    {
        if(ar[i] >= 'a' && ar[i] <= 'z')
        {
            for(j = i + 1; j < n - 1; j++)
            {
                if(ar[i] == ar[j])
                    ar[i] = ',';
            }

        }
    }
    for(i = 0; i < n; i++)
    {
        if(ar[i] >= 'a' && ar[i] <= 'z')
        {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
