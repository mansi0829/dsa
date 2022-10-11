#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int input;
        cin >> input;
        if (input == 1)
        {
            cout << 2 << endl;
            continue;
        }
        bool f = input % 3 != 0;
        cout << input / 3 + f << endl;
    }
    return 0;
}