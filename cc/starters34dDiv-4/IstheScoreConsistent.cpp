#include <bits/stdc++.h>
using namespace std;

void TRUESCORE()
{
    int a, b, x, y;
    cin >> a >> b;
    cin >> x >> y;
    if (x >= a && y >= b)
    {
        cout << "POSSIBLE" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        TRUESCORE();
    }
    return 0;
}