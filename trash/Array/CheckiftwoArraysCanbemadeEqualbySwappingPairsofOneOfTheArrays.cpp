#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int n)
{
    // if (n % 2 == 0)
    // {
        for (int i = 0; i < n/2 +1; i++)
        {
            arr[i] = arr[n];
            n--;
        }
    // }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[] = {0, 0, 1, 1}, arr2[] = {1, 1, 0, 0};
    swap(arr1, 4);
    print(arr1, 4);
    cout<<endl;
    swap(arr2, 4);
    print(arr2, 4);
    return 0;
}