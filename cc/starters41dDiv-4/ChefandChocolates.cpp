#include <iostream>
using namespace std;

int mansi(int a, int b, int c)
{
    int cost = a * 5 + b * 10;
    int canAfford = cost / c;
    return canAfford;
}

int main()
{
    // your code goes here
    int testCases, a, b, c;
    cin >> testCases;
    while (testCases--)
    {
        cin >> a >> b >> c;
        cout << mansi(a, b, c) << endl;
    }
    return 0;
}
