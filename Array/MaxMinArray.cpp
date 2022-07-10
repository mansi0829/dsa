#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = n - 1;
    int mid = n / 2;
    while (start < end)
    {
        if (arr[end] < arr[start])
        {
            swap(arr[end], arr[start]);
        }
        start += 1;
        end -= 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}