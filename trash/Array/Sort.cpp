// simple sort
// bubble sort
// time complexity : O(n^2)
// Auxiliary Space: O(1)
#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++) // what is difference between j<n and j<n-1-i
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}