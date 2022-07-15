// purpose is to get largest number at 0th position and smallest at n-1th position

#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maxValue, maxIndex, minValue, minIndex;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            count += 1;
        }
        else
        {
            continue;
        }
        // i++;
    }
    cout << count;
    return 0;
}