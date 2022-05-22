#include <bits/stdc++.h>
using namespace std;

void maymansi(int number)
{
    int arr[4], sum = 0;
    int max = arr[0];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    if (sum == number)
    {
        for (int i = 1; i < 4; ++i)
        {
            // Change < to > if you want to find the smallest element
            if (arr[0] < arr[i])
                arr[0] = arr[i];
        }

        cout << arr[0] << endl;
    }
}

int main()
{
    // your code goes here
    int testcases, number;
    cin >> testcases;
    while (testcases--)
    {
        cin >> number;
        maymansi(number);
    }
    return 0;
}
