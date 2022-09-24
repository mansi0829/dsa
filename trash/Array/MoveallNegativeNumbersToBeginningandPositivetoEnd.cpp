// well few edge cases are not working

#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

void rearrange(int *arr, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
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
    int pos = 0, neg = 0;
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
