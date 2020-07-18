#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    char name[15];
    int result = 0;
    char ch;

    scanf("%d", &n);

    while(n)
    {
        scanf("%s", &name);
        if(name[0] == 'T')
        {
            result += 4;
        }
        else if(name[0] == 'C')
        {
            result += 6;
        }
        else if(name[0] == 'O')
        {
            result += 8;
        }
        else if(name[0] == 'D')
        {
            result += 12;
        }
        else if(name[0] == 'I')
        {
            result += 20;
        }
        n--;
    }

    printf("%d", result);
    scanf("%c", ch);
    return 0;
}
