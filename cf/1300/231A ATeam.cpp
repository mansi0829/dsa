#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

int main()
{
    ll number_problem;
    cin >> number_problem;
    int a, b, c, count = 0;
    for (int i = 0; i < number_problem; i++) // row
    {
        cin >> a >> b >> c;
        // cout << a << b << c << endl;
        if ((a == 1 && b == 1) || (a == 1 && c == 1) || (c == 1 && b == 1))
        {
            count += 1;
        }
    }

    cout << count;
    return 0;
}