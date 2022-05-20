#include <bits/stdc++.h>
using namespace std;

void mansimg(int m, int n)
{
    cout << m * 10 + 90 * n << endl;
}

int main()
{
    // your code goes here
    int testCases, m, n;
    cin >> testCases;
    while (testCases--)
    {
        cin >> m >> n;
        mansimg(m, n);
    }

    return 0;
}
