#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        string s(m, 'B');
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x = min(arr[i], m + 1 - arr[i]);
            int y = max(arr[i], m + 1 - arr[i]);
            if (s[x - 1] != 'A')
                s[x - 1] = 'A';

            else
                s[y - 1] = 'A';
        }

        cout << s << endl;
    }
    return 0;
}