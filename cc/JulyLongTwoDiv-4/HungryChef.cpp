#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

void mansi(ll x, ll y, ll n, ll r)
{
    ll aukatbaherburgir;
    aukatbaherburgir = (r - x * n) / (y - x);
    if (r / x < n)
    {
        cout << -1 << "\n";
    }
    else if (r / y >= n)
    {
        cout << 0 << " " << n << "\n";
    }
    else
    {
        // if ((r - x * n) % (y - x) != 0)
        // aukatbaherburgir =aukatbaherburgir+ 1;
        cout << n - aukatbaherburgir << " " << aukatbaherburgir << "\n";
    }
}

int main()
{
    // your code goes here
    ll testcases, first, second, a, b;
    cin >> testcases;
    while (testcases--)
    {
        cin >> first >> second >> a >> b;
        mansi(first, second, a, b);
    }
    return 0;
}
