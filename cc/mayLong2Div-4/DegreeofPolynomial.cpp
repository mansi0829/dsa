#include <bits/stdc++.h>
using namespace std;

void mansi(int number)
{
    int arr[number], highS = 0;
    int max = arr[0];
    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    for (int k = number - 1; k > 0; --k)
    {
        if (arr[k] != 0)
        {
            highS = k;
            break;
        }
    }

    cout << highS << endl;
}

int main()
{
    // your code goes here
    int testcases, number;
    cin >> testcases;
    while (testcases--)
    {
        cin >> number;
        mansi(number);
    }
    return 0;
}
