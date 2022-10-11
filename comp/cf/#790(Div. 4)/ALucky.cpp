#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        int sum1 = 0, sum2 = 0;
        cin >> a;
        for (int i = 0; i < 3; i++)
        {
            sum1 = sum1 + int(a[i]);
        }
        for (int i = 3; i < 6; i++)
        {
            sum2 = sum2 + int(a[i]);
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}