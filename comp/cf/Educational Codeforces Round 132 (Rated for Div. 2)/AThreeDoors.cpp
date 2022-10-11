#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    int a, b, c;
    while (t--)
    {
        cin >> x;
        int arr[4];
        for (int i = 1; i <= 3; i++)
        {
            cin >> arr[i];
        }
        if (arr[x] == 0)
        {
            cout << "NO" << endl;
        }
        else if (arr[arr[x]] == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}