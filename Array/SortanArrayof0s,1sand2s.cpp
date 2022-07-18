// consider arr[mid] =0 arr[mid] =1 arr[mid] =2
// dutch flag algorithm

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int start = 0, mid = 0, end = n - 1;

    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[start++], arr[mid++]);
        }
        if (arr[mid] == 1)
        {
            mid++;
        }
        if (arr[mid] == 2)
        {
            swap(arr[mid], arr[end--]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}