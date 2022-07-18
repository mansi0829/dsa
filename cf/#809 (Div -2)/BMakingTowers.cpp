#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int count = 0;
        if (n == 1)
            cout << 1;
        else
        {
            vector<int> m[n];

            for (int i = 0; i < n - 1; i++)
            {
                m[arr[i]].push_back(i + 1);
                if ((arr[i] - arr[i - 1]) % 2 != 0)
                {
                    count++;
                    cout << count << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}

// for (int j = 0; j < n - 1 - i; j++)
//                 {
//                     if ((arr[j] - arr[j + 1]) % 2 != 0)
//                     {
//                         count++;
//                         cout << count << " ";
//                     }
//                     else
//                     {
//                         cout << 0 << " ";
//                     }
//                 }