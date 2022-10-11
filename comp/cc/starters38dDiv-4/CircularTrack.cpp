#include <bits/stdc++.h>
using namespace std;

void LOOP(int a, int b, int c)
{
    cout << min(abs(b - a), abs(c - (abs(b - a)))) << endl;
}

int main()
{
    // your code goes here
    long t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        LOOP(a, b, c);
    }

    return 0;
}
