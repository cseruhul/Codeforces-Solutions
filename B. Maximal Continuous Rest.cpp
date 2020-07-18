#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n, ar[200000], counter = 0, max = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }


    for(int i = 0; i < n; i++){
        if(ar[i] == 1)
        {
            counter++;
        }else
        {
            if(counter >= max)
            {
                max = counter;
                counter = 0;
            }
        }

    }
        if(ar[0] == 1 && ar[n-1] == 1)
        {
            if (counter == max){
                max++;}
        }

    printf("%d", max);

    return 0;
}
