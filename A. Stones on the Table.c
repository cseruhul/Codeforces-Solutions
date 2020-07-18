#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, count = 0, check = 0;
    char s[50];

    scanf("%d", &n);

    if((n >= 1) && (n <= 50))
    {
        scanf("%s", s);
        for(i = 0; i < n; i++)
        {
            if((s[i] == 'R' ) || (s[i] == 'G' ) || (s[i] == 'B' ))
            {
                check++;
            }
            else
            {
                check = 0;
                break;
            }
        }

        if(check)
        {
            for(i = 0; i < n; i++)
            {
                    if(s[i] == s[i+1])
                        count++;
            }
        }

        printf("%d", count);
    }

    return 0;
}
