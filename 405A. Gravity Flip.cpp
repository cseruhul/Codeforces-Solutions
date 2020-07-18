#include<bits/stdc++.h>

using namespace std;
int maximun(int ar[], int n)
{
    int maxm = ar[1];
    for(int i = 1; i < n; i++)
    {
        if(maxm < ar[i])
            maxm = ar[i];
    }
    for(int i = 1; i < n; i++)
    {
        if(maxm == ar[i])
            return i;

    }

}

int main()
{
    int n, ar[105], maxm;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }

    if(n == 1)
    {

        for(int i = 1; i <= n; i++)
        {
            cout << ar[i] << " ";
        }

    }else{
        for(int i = n; i > 0; i--)
        {
            maxm = maximun(ar, i);

            if(ar[i] <= ar[maxm])
            {
                int diff = abs(ar[i] - ar[maxm]);
                ar[i] += diff;
                ar[maxm] -= diff;
            }

        }


        for(int i = 1; i <= n; i++)
        {
            cout << ar[i] << " ";
        }

    }


    return 0;
}
