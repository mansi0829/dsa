#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int arr[4], count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 10)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
