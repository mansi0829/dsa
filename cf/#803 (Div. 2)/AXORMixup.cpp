// 1698 There is an array a with n−1 integers. Let x be the bitwise XOR of all elements of the array. The number x is added to the end of the array a (now it has length n), and then the elements are shuffled.

// You are given the newly formed array a.What is x ? If there are multiple possible values of x, you can output any of them.

#include <bits/stdc++.h>
using namespace std;
void mansi(int totalIntegers)
{
    int arr[totalIntegers];
    for (int i = 0; i < totalIntegers; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < totalIntegers; i++)
    {
        int *store = &arr[i];
        int ans = 0;
        for (int j = 0; j < totalIntegers; j++)
        {
            if (&arr[j] != store)
            {
                ans ^= arr[j];
            }
        }
        if (arr[i] == ans)
        {
            cout << arr[i] << endl;
            break;
        }
    }
}
int main()
{
    int testCases, totalIntegers;
    cin >> testCases;
    while (testCases--)
    {
        cin >> totalIntegers;
        mansi(totalIntegers);
    }
}