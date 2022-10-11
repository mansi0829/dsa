#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int open = 0, close = 0, q = 0;
        int n = s.length();
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '?')
                q++;
            if (s[i] == '(')
                open++;
            if (s[i] == ')')
                close++;
        }
        int x = abs(open - close);
        if (q < 2)
            cout << "YES\n";
        else if (n < 3)
            cout << "YES\n";
        else if (q > x)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}