// Leetcode : 217 Contains Duplicate

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             cout << "true";
//         }
//     }
//     cout << "false";
//     return 0;
// }

// using hashmap
#include <bits/stdc++.h>
using namespace std;

int checkDupe(int arr[], int n) {
    map<int, int> countMap;
    for (int i = 0; i < n; i++) {
        if(countMap[arr[i]]) {
            return true;
        }
        countMap[arr[i]]++;
    }
    return false;
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
    checkDupe(arr,n);

    return 0;
}
