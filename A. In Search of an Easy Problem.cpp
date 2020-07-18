#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[101], n, a, temp = 0;
    cin >> n;

    while(n)
    {
        cin >> a;
        if(a == 1)
        {
            temp = 1;
            break;
        }
        n--;
    }

    if(temp == 0)
        printf("EASY\n");
    else
        printf("HARD\n");

    return 0;
}
