#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int n = a.length();
    int i = 0;
    while (i < n)
    {
        if (a[i] == '-' && a[i + 1] == '-')
        {
            cout << 2;
            i = i + 2;
        }
        if (a[i] == '-' && a[i + 1] == '.')
        {
            cout << 1;
            i = i + 2;
        }
        if (a[i] == '.')
        {
            cout << 0;
            i = i + 1;
        }
    }
    return 0;
}