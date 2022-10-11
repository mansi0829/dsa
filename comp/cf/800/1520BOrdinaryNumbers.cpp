#include <bits/stdc++.h>
using namespace std;

void mansi(int n)
{
    int count = 0;
    for (int i = 1; i <= n; count++)
    {
        i = i / (i % 10) * (i % 10 + 1);
        if (i % 10 == 0)
            i++;
    }
    cout << count << "\n";
}

int main()
{
    int testcases, n;
    cin >> testcases;
    while (testcases--)
    {
        cin >> n;
        mansi(n);
    }
    return 0;
}