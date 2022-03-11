// Sum of all SubArrays
// Given an array a[] of size n. Output sum of each subarray of the given array.
// iterate over all subarrays.

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n - 1; j++)
        {
            curr = curr + arr[j];       // curr+=a[j]
            cout << curr << " ";
        }
    }
}
