#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void mansi(ll first, ll second)
{
    if (first > second)
    {
        cout << first - second << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    // your code goes here
    ll TestCases, first, second;
    cin >> TestCases;
    while (TestCases--)
    {
        cin >> first >> second;
        mansi(first, second);
    }

    return 0;
}
