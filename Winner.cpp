#include<iostream>

using namespace std;

class Winner{
public:
    string name;
    int score = 0;
};
int main()
{
    Winner ob1, ob2;

    int n;
    cin >> n;

    if((n >= -1000) && (n <= 1000))
    {
        while(n != 0)
        {
            cin >> ob1.name >> ob1.score;
            n--;
        }

        cout << ob1.name;

    }

    return 0;
}
