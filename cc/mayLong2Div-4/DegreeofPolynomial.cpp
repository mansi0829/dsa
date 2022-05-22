#include <bits/stdc++.h>
using namespace std;

void mansi(int m)
{
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    for (int i = m - 1; i <= 0; i++)
    {
        if (arr[m - 1] == 0)
        {
            cout << i - 2 << endl;
        }
        else
        {
            cout << i - 1 << endl;
        }
    }
}

int main()
{
    // your code goes here
    int testCases, m;
    cin >> testCases;
    while (testCases--)
    {
        cin >> m;
        mansi(m);
    }
    return 0;
}
