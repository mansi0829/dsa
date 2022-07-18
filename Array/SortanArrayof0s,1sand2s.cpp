#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while (start <= mid)
    {
        if (arr[start] == 0 && arr[end] == 1)
        {
            swap(arr[start], arr[end]);
        }
        if (arr[start] == 1 && arr[end] == 2)
        {
            swap(arr[start], arr[end]);
        }
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}