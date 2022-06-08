#include <bits/stdc++.h>
using namespace std;

void mansi(int first, int b)
{
    int count = 0;

    while ((first % 3) != 0 && (b % 3) != 0)
    {
        if (first >= b)
        {
            first = abs(first - b);
        }
        else
        {
            b = abs(first - b);
        }
        count++;
    }
    cout << count << endl;
}

int main()
{
    // your code goes here
    int testcase, a, b, c;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        mansi(a, b);
    }
    return 0;
}
