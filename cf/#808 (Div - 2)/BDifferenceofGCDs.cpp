#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

int gcd(int a, int b)
{
    int result = min(a, b);
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result;
}

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    ll i = 1;
    ll count = 0;
    vector<int> v;
    if ((r - l + 1) < n)
        cout << "NO" << endl;
    else
    {
        while (l <= r && i <= n)
        {
            if (l % i == 0)
            {
                v.push_back(l);
                l++;
                i++;
                count++;
            }
            else
            {
                l++;
            }
        }
        if (count == n)
        {
            cout << "YES" << endl;
            for (auto x : v)
                cout << x << " ";
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}