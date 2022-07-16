// #include <bits/stdc++.h>
// using namespace std;
// void sortArray(int *arr, int n)
// {
//     int l = 0;
//     int r = n - 1;
//     while (l >= r)
//     {
//         if (arr[l] > arr[r])
//         {
//             swap(arr[l], arr[r]);
//         }
//         l++, r--;
//     }
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     sortArray(arr, n);

//     int k;
//     cin >> k;
//     // cout << arr[k - 1];

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void sortArray(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j] , arr[j + 1]);
            }
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
    sortArray(arr, n);
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}