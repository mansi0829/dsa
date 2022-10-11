#include <bits/stdc++.h>
using namespace std;

int main()
{
    int MAX_INT = 99999;
    // cin>>testcases;
    int arr[MAX_INT];
    for (int i = 0; i < MAX_INT; i++)
    {
        arr[MAX_INT] == 0;
    }
    for (int i = 0; i < MAX_INT; i++)
    {
        if (arr[i] == -1)
        {
            break;
        }
        cin >> arr[i];
    }
    // cout << getMin(arr, );
    sort(arr, arr + MAX_INT);
    for (int i = 0; i < MAX_INT; i++)
    {
        // cout<<arr[i];
        if (arr[i] >= 100)
        {
            cout << arr[i];
            break;
        }
    }

    return 0;
}