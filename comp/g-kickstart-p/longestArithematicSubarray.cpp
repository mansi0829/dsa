// longest Arithematic Subarray

// Sarasvati has an array of N non-negative integers.The i-th
// integer of the array is A.She wants to choose a contiguous arithmetic
// subarray from her array that has the maximum length.Please help her to
// determine the length of the longest contiguous arithmetic subarray.

// link : https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed

// Approach :
// loop over the array and find answer
// maintain : prev common diff, current arithmetic subarray length, max arithmetic subarray length

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int ans = 2;
        int pd = arr[1] - arr[0];
        int j = 2;
        int curr = 2;

        while (j < N)
        {
            if (pd == arr[j] - arr[j - 1])
            {
                curr++;
            }
            else
            {
                pd = arr[j] - arr[j - 1];
                curr = 2;
            }
            ans = max(ans, curr);
            j++;
        }

        cout << ans << endl;
    }
    return 0;
}