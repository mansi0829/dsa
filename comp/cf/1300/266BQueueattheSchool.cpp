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
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (st[i] == 'G' && st[i - 1] == 'B')
            {
                swap(st[i], st[i - 1]);
                i++;
            }
        }
    }
    cout << st;

    return 0;
}