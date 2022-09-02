#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
#define ll long long int;
using namespace std;

void Crossmarket(int n, int m)
{
    if (n ==1 && m == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 2 * min(n, m) - 2 + max(n, m) << endl;
    }
}

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        Crossmarket(n, m);
    }
    return 0;
}