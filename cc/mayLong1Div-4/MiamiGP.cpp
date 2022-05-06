#include <bits/stdc++.h>
using namespace std;

void F1RULE(double a, double b)
{
    double minTime;
    minTime = (107 * a) / 100;
    if (minTime >= b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // your code goes here
    double T, a, b;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> a >> b;
        F1RULE(a, b);
    }
    return 0;
}
