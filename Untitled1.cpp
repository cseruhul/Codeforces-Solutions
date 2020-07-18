#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
    char ch1[100], ch2[100];

    cin >> ch1;
    cin >> ch2;

    int n = strlen(ch1);



    for(int i = 0; i < n; i++)
    {
        ch1[i] = tolower(ch1[i]);
        ch2[i] = tolower(ch2[i]);
    }

    if((strcmp(ch1, ch2)) > 0)
    {
        printf("1");
    }
    else if((strcmp(ch1, ch2)) < 0)
    {
        printf("-1");
    }
    else
    printf("0");

    return 0;
}
