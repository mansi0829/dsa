//https://codeforces.com/contest/1676/problem/B
#include <bits/stdc++.h>
using namespace std;

void boxes(int n)
{
    int arr[n];
    int sum = 0;
    if (n == 1)
    {
        sum = 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int min = arr[0];
            if (arr[i] < min)
            {
                min = arr[i];
            }

            arr[i] = arr[i] - 5;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                sum = 0;
            }
            sum = arr[i] + sum;
        }
    }
    cout << sum << endl;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        boxes(n);
    }
}