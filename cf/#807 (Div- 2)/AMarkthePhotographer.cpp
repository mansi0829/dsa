#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

int main()
{
    int testcases, a, b;
    cin >> testcases;
    while (testcases--)
    {
        cin >> a >> b;
        int newSize = 2 * a;
        vector<int> arr(newSize);
        for (int i = 0; i < newSize; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int j = a - 1, count = 0;
        int i = 0;
        while (i < a && j < newSize)
        {
            if (arr[j + 1] - arr[i] >= b)
            {
                count++;
            }
            i++, j++;
        }
        if (count == a)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        // cout << count;
        cout << endl;
    }
    return 0;
}