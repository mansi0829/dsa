#include <bits/stdc++.h>
using namespace std;

void POSPROD()
{
    long long a, x, positive = 0, negative = 0, ans = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        if (x > 0)
        {
            ans += positive;
            positive++;
        }
        else if (x < 0)
        {
            ans += negative;
            negative++;
        }
    }

    cout << ans << endl;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        POSPROD();
    }
    return 0;
}