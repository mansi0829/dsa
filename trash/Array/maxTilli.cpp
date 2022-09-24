// Given an array a[] of size n. for every i from 0 to n-1 output max(a[0], a[1],.., a[i])= O(n)
// prefix maximum
// example:    [1, 0, 5, 4, 6, 8]
// max till i:  1  1  5  5  6  8
// approach:
// 1.keep a variable mx which stores the maximum till ith element
// 2.Iterate over the array and update.

#include <iostream>
using namespace std;

int main()
{
    int mx = -199999999;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }

    return 0;
}