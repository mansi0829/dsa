#include <bits/stdc++.h>
using namespace std;

void QUEENATTACK(int n, int x, int y)
{
    int q = n - x + x - 1 + n - y + y - 1;
    int a = min(x - 1, y - 1);
    int b = min(n - x, n - y);
    int c = min(n - x, y - 1);
    int d = min(x - 1, n - y);
    cout << q + a + b + c + d << endl;
}

int main()
{
    // your code goes here
    int T, a, b, c;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> a >> b >> c;
        QUEENATTACK(a, b, c);
    }
    return 0;
}
