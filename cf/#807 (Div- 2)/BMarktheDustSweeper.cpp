#include <bits/stdc++.h>
using namespace std;
int main()
{

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool f = false;

        long long int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != 0)
            {
                f = true;
            }
            if (f)
            {
                if (arr[i] == 0)
                {
                    ans += 1;
                }
                else
                {
                    ans += arr[i];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}