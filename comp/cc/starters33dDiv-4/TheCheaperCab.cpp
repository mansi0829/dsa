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
        if (arr[0] > arr[1])
        {
            cout << "SECOND" << endl;
        }
        else if (arr[0] < arr[1])
        {
            cout << "FIRST" << endl;
        }
        else
        {
            cout << "ANY"<<endl;
        }
    }
    return 0;
}