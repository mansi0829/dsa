#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void mansi(ll first, ll second)
{
    if (first % 6 == 0)
    {
        cout << (first / 6) * second << endl;
    }
    else
    {
        cout << abs(first / 6) * second << endl;
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
