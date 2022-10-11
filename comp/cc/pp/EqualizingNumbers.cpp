#include <iostream>
using namespace std;

void solve(int a, int b)
{
    int d = 0;
    if (a == b)
    {
        cout << "YES" << endl;
    }
    else
    {
        a = d + a;
        b = b - d;
        if (a - b == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            // d++;
        }
    }
}

int main()
{
    // your code goes here
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
