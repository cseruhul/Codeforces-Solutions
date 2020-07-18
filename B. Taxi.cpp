#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, one = 0, two = 0, three = 0, four = 0, count = 0, value;
    cin >> n;


    for(int i = 0; i < n; i++)
    {
        cin >> value;
        if(value == 1) one++;
        if(value == 2) two++;
        if(value == 3) three++;
        if(value == 4) four++;
    }

    count += four;
    four = 0;

    count += two / 2;
    two = two % 2;

    if(one > three)
    {
        count += three;
        one -= three;
        three = 0;
        count += one / 4;
        one = one % 4;

        if(((one + two * 2) <= 4) && ((one + two * 2) > 0))
        {
            count++;
            one = 0;
            two = 0;
        }
        else if(one == 3 && two == 1)
        {
            count += 2;
            one = 0;
            two = 0;
        }

    }
    else if(three >= one)
    {
        count += one;
        three -= one;
        one = 0;
        count += three + two;
    }

//    if(one > three)
//    {
//        count += three;
//        one = one - three;
//        three = 0;
//        count += one/4;
//        one = one%4;
//    }
//
//    if((one + two*2 <= 4) &&(one + two*2 > 0))
//    {
//        count += 1;
//        one = 0;
//        two = 0;
//    }
//    else if(one = 2 && two == 1){
//        count += 2;
//        one = 0;
//        two = 0;
//    }
//    if(one < three)
//    {
//        count += one;
//        three -= one;
//        one = 0;
//
//        count += three + two;
//    }

    printf("%d", count);


    return 0;
}
