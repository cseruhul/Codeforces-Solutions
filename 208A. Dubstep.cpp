#include<bits/stdc++.h>
using namespace std;

void brute(char *pattern, char *text)
{
    int M = strlen(pattern);
    int N = strlen(text);

    for(int i = 0; i <= N - M; i++)
    {
        int j;
        for(j = 0; j < M; j++)
            if(text[i + j] != pattern[j])
                break;

            if(j == M)
            {
                text[i] = ' ';
                text[i + 1] = ' ';
                text[i + 2] = ' ';
            }
    }
}

int main()
{
    char text[205], pattern[] = "WUB";

    cin >> text;

    brute(pattern, text);

    cout << text;

    return 0;
}
