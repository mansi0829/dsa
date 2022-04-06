#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, a;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> a;
        if (a % 4 == 0)
        {
            cout << a / 4<<endl;
        }
        else
        {
            cout << abs(a / 4) + 1<<endl;
        }
    }

    return 0;
}