#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, sum = 0;
    cin >> T;
    int arr[T][3];
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    if (sum == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}