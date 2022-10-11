#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int a;
        cin >> a;
        int arr[a];
        int count = 0;
        for (int j = 0; j < a; j++)
        {
            cin >> arr[j];
            if (arr[j] % 2 == 0)
            {
                count += 1;
            }
        }
        if ((a - count) % 2 == 0)
        {
            cout << min(count, (a - count) / 2) << endl;
        }
        else
        {
            cout << count << endl;
        }
    }

    return 0;
}