#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void PRIMESM()
{
    long long int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        long long int a, b;
        cin >> a >> b;
        if (abs(b - a) % 2 == 0 || abs(b - a) % a == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}

int main()
{
    // your code goes here
    PRIMESM();
    return 0;
}
