#include <bits/stdc++.h>
using namespace std;

void findSubarray(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans.push_back(arr[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findSubarray(arr, n);
    return 0;
}