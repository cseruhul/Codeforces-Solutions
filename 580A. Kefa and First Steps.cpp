#include<bits/stdc++.h>

using namespace std;
//int longestcommonsub(long long arr[], long long n)
//{
//    int max = 1, len = 1, i;
//    for(i = 1; i < n; i++)
//    {
//        if(arr[i] >= arr[i - 1])
//            len++;
//        else
//            if(max < len)
//                max = len;
//    }
//
//    if(max < len)
//        max = len;
//
//    return max;
//}

int main()
{

    int i, n, arr[1000000];

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxm = 1, len = 1;
    for(i = 1; i < n; i++)
    {
        if(arr[i] >= arr[i - 1])
            len++;
        else
        {
            if(maxm < len)
            {
                maxm = len;
            }
                len = 1;

        }

    }

    if(maxm < len)
        maxm = len;

    cout << maxm << endl;
    return 0;
}
