#include <bits/stdc++.h>
using namespace std;

void AXNODR()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        long long int a;
        cin >> a;
        if (a % 4 == 3 || a % 4 == 2)
        {
            cout << "3" << endl;
        }
        else if (a % 4 == 0)
        {
            cout << a + 3 << endl;
        }
        else if (a % 4 == 1)
        {
            cout << a << endl;
        }
    }
}

int main()
{
    // your code goes here
    AXNODR();
    return 0;
}
