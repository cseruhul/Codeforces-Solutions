#include<bits/stdc++.h>
using namespace std;

int main()
{
    char word[105];
    int upper = 0, lower = 0, i;

    cin >> word;

    for(i = 0; i < strlen(word); i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
            upper++;
        else if(word[i] >= 'a' && word[i] <= 'z')
            lower++;
    }


//cout << "Lower: " << lower << "\nUpper: " << upper << endl;

    if(upper > lower)
    {
//        cout << "Upper: \n";
        for(i = 0; i < strlen(word); i++)
        {
            if(word[i] >= 'a' && word[i] <= 'z')
                word[i] = word[i] - 32;
        }
    }
    else if((lower > upper) || (lower == upper))
    {
//        cout << "Lower: \n";
        for(i = 0; i < strlen(word); i++)
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
                word[i] = word[i] + 32;
        }

    }

    cout << word<< endl;

    return 0;
}
