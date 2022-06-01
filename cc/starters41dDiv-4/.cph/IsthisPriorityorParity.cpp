#include <bits/stdc++.h>
using namespace std;

void mansi(long long int total, long long int whichPlace)
{
    if (whichPlace == 1)
    {
        if ((total & 1) == 1)
        {
            cout << "ODD" << endl;
        }
        else
        {
            cout << "EVEN" << endl;
        }
    }
    else if (whichPlace == 2)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "EVEN" << endl;
    }
}

int main()
{
    // your code goes here
    long long int testCases, a, b;
    cin >> testCases;
    while (testCases--)
    {
        cin >> a >> b;
        mansi(a, b);
    }
    return 0;
}
