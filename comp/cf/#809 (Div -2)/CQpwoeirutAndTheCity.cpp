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
        ll n;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0;
        if (n % 2)
        {
            for (int i = 1; i < n; i += 2)
            {
                ans += (max(v[i - 1], v[i + 1]) - v[i] < 0) ? 0 : max(v[i - 1], v[i + 1]) - v[i] + 1;
            }
        }
        else
        {
            ll ans1 = 0;
            for (int i = 1; i < n - 1; i += 2)
            {
                ans1 += (max(v[i - 1], v[i + 1]) - v[i] < 0) ? 0 : max(v[i - 1], v[i + 1]) - v[i] + 1;
            }

            ll ans2 = 0;
            for (int i = 2; i < n - 1; i += 2)
            {
                ans2 += (max(v[i - 1], v[i + 1]) - v[i] < 0) ? 0 : max(v[i - 1], v[i + 1]) - v[i] + 1;
            }

            ll ans3 = 1e18;
            if (n == 6)
            {
                ans3 = 0;
                for (int i = 1; i < n - 1; i += 3)
                {
                    ans3 += (max(v[i - 1], v[i + 1]) - v[i] < 0) ? 0 : max(v[i - 1], v[i + 1]) - v[i] + 1;
                }
            }

            ans = min({ans1, ans2, ans3});
        }

        cout << ans << endl;
    }
    return 0;
}