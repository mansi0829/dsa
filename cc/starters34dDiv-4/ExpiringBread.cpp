#include <bits/stdc++.h>
using namespace std;

void EXPIRY()
{
    int total_bread, number_days, each_day;
    cin >> total_bread >> number_days >> each_day;
    if ((each_day * number_days) >= total_bread)
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
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        EXPIRY();
    }
}