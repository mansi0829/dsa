#include <bits/stdc++.h>
using namespace std;
int main()
{
    string maths;
    cin >> maths;
    int n = maths.length();
    int i = 0;
    while (i < n)
    {
        string store;
        int even = 0;
        for (int j = 0; i < n; j++)
        {
            if (i % 2 == 0)
            {
                store[j] = maths[i];
                cout << store;
                return 0;
            }
        }

        i += 1;
    }
    return 0;
}