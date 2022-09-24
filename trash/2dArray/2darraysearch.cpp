#include <iostream>
using namespace std;

int main()
{
    int m, n, x;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Matrix is : \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    // cout << "Enter an element to found in given matrix : \n";
    cin >> x;

    bool flag = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == x)
            {
                flag = true;
            }
        }
    }

    if (flag)
        cout << "Element found\n";
    else
        cout << "Element not found \n";

    return 0;
}