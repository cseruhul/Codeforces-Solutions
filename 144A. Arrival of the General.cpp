#include<bits/stdc++.h>
using namespace std;

int maximum(int ar[], int n)
{
    int i, maxmum = ar[0];
    for(i = 0; i < n; i++)
    {
        if(ar[i] > maxmum)
            maxmum = ar[i];
    }
    //return maxmum;
    for(i = 0; i < n; i++)
    {
        if(ar[i] == maxmum)
            return i;
    }
}
int minimum(int ar[], int n)
{
    int i, minmum = ar[n-1];
    for(i = n-1; i >= 0; i--)
    {
        if(ar[i] < minmum)
            minmum = ar[i];
    }
    //return minmum;
    for(i = n-1; i >= 0; i--)
    {
        if(ar[i] == minmum)
            return i;
    }
}
int main()
{
    int n, arr[105], i, max, min, total;

    cin >> n;

    for(i = 0; i < n; i++)
        cin >> arr[i];


    max = maximum(arr, n);
    min = minimum(arr, n);

    if(min < max)
        total = max - 2 + n - min;
    else
        total = max + n - min - 1;

    cout << total << endl;

/*
    int low, high;

    cout << maximum(arr, n) << endl;
    cout << minimum(arr, n) << endl;

    low = n - 1 - minimum(arr, n);
    high = maximum(arr, n);


    cout << low + high;
*/
    return 0;
}
