#include <iostream>
using namespace std;

void mansi(int a, int b, int c, int d)
{
    int maxP = max(a, b);
    int maxQ = max(c, d);
    if (maxP == maxQ)
    {
        cout << "TIE" << endl;
    }
    else if (maxP > maxQ)
    {
        cout << "Q" << endl;
    }
    else if (maxP < maxQ)
    {
        cout << "P" << endl;
    }
}

int main()
{
    // your code goes here
    int testCases, a, b, c, d;
    cin >> testCases;
    while (testCases--)
    {
        cin >> a >> b >> c >> d;
        mansi(a, b, c, d);
    }
    return 0;
}
