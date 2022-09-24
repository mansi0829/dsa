#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n]; // if the arr[n] is declared before then it gets the garbage value of n
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // one way to reverse string is to traverse it in reverse order
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }

    // to swap the first and last element increasing and decreasing till mid resptively
    int start = 0, end = n - 1;
    while (start <= end) {
        swap(arr[start], arr[end]);
        start += 1;
        end -= 1;
    }
    int i = 0;
    while (i != n) {
        cout << arr[i++] << " ";
    }
    return 0;
}