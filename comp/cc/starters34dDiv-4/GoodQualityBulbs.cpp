#include <bits/stdc++.h>
using namespace std;

void BULBLIFE()
{
    int a, b, x, sum = 0, ans;
    cin >> a >> b;
    for (int i = 0; i < a - 1; i++)
    {
        cin >> x;
        sum += x;
    }
    ans = a * b - sum;
    if (sum>=a*b)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        BULBLIFE();
    }
    return 0;
}