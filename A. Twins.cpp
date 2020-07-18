#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ar[105], i, sum = 0, j, temp = 0, countr = 0;

    cin >> n;

    for(i = 0 ; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n, greater<int>());

//    for(i = 0; i < n; i++)
//        cout << ar[i] << " ";

    for(i = 0 ; i < n; i++)
    {
        countr = 0;
        sum = 0;
        temp += ar[i];
        //cout << endl << " Temp = " << temp;
        for(j = i + 1 ; j < n; j++)
        {
            countr++;
            sum += ar[j];
        }
    //cout << " Sum = " << sum << " Counter: " << countr;

        if(temp > sum)
            break;

    }

    cout << endl << n - countr;

//    int n, ar[105], i, counter = 0, j, maximum = 0;
//
//    cin >> n;
//
//    for(i = 0; i < n; i++)
//    {
//        cin>>ar[i];
//    }
//
//
//    for(i = 0; i < n; i++)
//    {
//        for(j = i+1; j < n; j++)
//        {
//            if(ar[i] == ar[j])
//            counter++;
//
//        }
//            if(maximum < counter)
//            maximum = counter;
//    }
//
//    printf("%d\n", maximum+1);

    return 0;
}
