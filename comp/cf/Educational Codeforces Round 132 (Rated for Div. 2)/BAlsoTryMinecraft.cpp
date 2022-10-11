#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
#define ll long long int

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n], b[n + 1], c[n];
    b[0] = 0;
    b[1] = 0;
    c[n - 1] = 0;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 2; i <= n; i++)
    {
        if (a[i - 1] < a[i - 2])
            b[i] = a[i - 2] - a[i - 1] + b[i - 1];
        else
            b[i] = b[i - 1];
    }
    for (ll i = n - 2; i >= 0; i--)
    {
        if (a[i + 1] > a[i])
            c[i] = a[i + 1] - a[i] + c[i + 1];
        else
            c[i] = c[i + 1];
    }
    while (m--)
    {
        ll l, r;
        cin >> l >> r;
        if (l > r)
        {
            cout << abs(c[l - 1] - c[r - 1]);
        }
        else
        {
            cout << b[r] - b[l];
        }
        cout << "\n";
    }
    // }
    return 0;
}