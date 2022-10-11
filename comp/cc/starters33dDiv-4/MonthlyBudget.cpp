#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int arr[2];
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[j];
        }
        if (arr[1] * 30 <= arr[0])
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}