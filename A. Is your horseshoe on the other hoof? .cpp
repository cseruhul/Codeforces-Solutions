#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    if(s1 == s2 && s1 == s3 && s1 == s4)
    {
        cout << 3 << endl;
    }
    else if((s1 == s2 && s1 == s3) || (s1 == s3 && s1 == s4) || ( s2 == s3 && s2 == s4) || (s1 == s2 && s3 == s4) || (s1 == s3 && s2 == s4) || (s1 == s4 && s2 == s3))
    {
        cout << 2 << endl;
    }
    else if(s1 == s2 || s1 == s3 || s1 == s4 || s2 == s3 || s2 == s4 ||s3 == s4)
    {
        cout << 1 << endl;
    }
    else
        cout << 0 << endl;

//    long long ar[5], maximum = 0;
//    int i, j, counter = 0, n = 4;
//
//    for(i = 0; i < n; i++)
//        cin >> ar[i];
//
////    for(i = 0; i < n; i++)
////        cout << ar[i] << " ";
////
////    for (i = 0; i < n-1; i++)
////        for (j = 0; j < n-i-1; j++)
////            if (ar[j] > ar[j + 1])
////                swap(ar[j], ar[j+1])
//
//    sort(ar, ar + n);
//
////    cout << "\nAfter sorting......" << endl;
////    for(i = 0; i < n; i++)
////        cout << ar[i] << " ";
//
//    for(i = 0; i+1 < n; i++)
//    {
//        if(ar[i] == ar[i + 1])
//        {
//            counter = 0;
//            for(j = i; j < n; j++)
//            {
//                if(ar[i] == ar[j])
//                    counter++;
//                if(maximum < counter)
//                    maximum = counter;
////                cout << "Counter : " << counter << " Max: " << maximum << endl;
//            }
//        }
//
//    }
//
//    if(maximum == 0)
//        cout << maximum<< endl;
//    else
//        cout << maximum - 1 << endl;


    return 0;
}
