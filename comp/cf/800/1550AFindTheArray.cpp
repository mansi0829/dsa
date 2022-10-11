#include <bits/stdc++.h>
using namespace std;

void mansi(int b)
{
    int n = 1, sum = 0;
    while (b > 0)
    {
        sum++;
        b -= n;
        n += 2;
    }
    cout << sum << "\n";
}

int main()
{
    int n;
    cin >> n;
    int b;
    while (n--)
    {
        cin >> b;
        mansi(b);
    }

    return 0;
}