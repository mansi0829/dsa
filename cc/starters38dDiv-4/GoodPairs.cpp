#include <bits/stdc++.h>
using namespace std;

void LOOP(int a)
{
    long long int arr1[a], arr2[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < a; j++)
    {
        cin >> arr2[j];
    }
    long long int c = 0;
    for (int i = 0; i < a; i++)
    {
        long long int x = arr1[i], y = arr2[i];
        for (int j = i + 1; j < a; j++)
        {
            if (x == arr2[j] && y == arr2[j])
            {
                c++;
            }
        }
    }
    cout << c << endl;
}

int main()
{
    // your code goes here
    long long int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a;
        LOOP(a);
    }

    return 0;
}
