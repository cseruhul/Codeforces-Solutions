#include<bits/stdc++.h>

using namespace std;
int arr[100];

int main()
{
    char ch[105];
    int i, n, j, result = 0;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> ch[i];
    }

    for(i=0; i < n; i++)
    {
        if(ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
    }
    ch[i] = '\0';

    for(i = 65; i < 91; i++)
    {
       for(j = 0; j < n; j++)
       {
           if(i == int(ch[j]))
           {
               arr[i] = 1;
           }
       }
    }

    for(i = 65; i < 91; i++)
    {
        if(arr[i] == 0)
        {
            result = 0;

            break;
        }else{
        result = 1;
        }
    }

    if(result == 1)
        cout << "YES";
    else if(result == 0)
        cout << "NO";
    //cout << "\n" << ch;

    return 0;
}
