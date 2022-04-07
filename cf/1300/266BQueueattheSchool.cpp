#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string st;
    for (int i = 0; i < n; i++)
    {
        cin >> st;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (st[i] == 'B' && st[i + 1] == 'G')
            {
                swap(st[i], st[i + 1]);
            }
        }
    }
    cout << st;

    return 0;
}