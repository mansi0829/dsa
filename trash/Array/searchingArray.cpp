// linear search O(n)
// search an index

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the Total Number of elements in an array : ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key to be searched : ";
    cin >> key;
    cout << "Key is at : " << linearSearch(arr, n, key);
    return 0;
}