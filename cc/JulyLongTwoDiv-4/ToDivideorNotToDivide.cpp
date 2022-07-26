#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

void mansi(int A, int B, int N)
{
    if (N % A == 0 && N % B != 0)
        cout << N << "\n";
    else if (A == B)
        cout << "-1"
             << "\n";
    else if (A % B == 0)
        cout << "-1"
             << "\n";

    else
    {
        int n = N + A - (n % A);
        if (!(n % A))
        {
            cout << n + A << "\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
}

int main()
{
    int testcases, first, second, a;
    cin >> testcases;
    while (testcases--)
    {
        cin >> first >> second >> a;
        mansi(first, second, a);
    }

    return 0;
}