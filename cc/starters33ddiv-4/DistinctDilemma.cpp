#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int v[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        int x = 1, ans = 0;
        while (sum > 0)
        {
            sum -= x;
            ans += 1;
            x += 1;
        }
        if (sum < 0)
            cout << ans - 1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
