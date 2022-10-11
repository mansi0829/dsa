#include <iostream>
using namespace std;

void mansi(long long int first, long long int b)
{
    if (first % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {

        if (b == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    // your code goes here
    int testCases;
    long long int first, b;
    cin >> testCases;
    while (testCases--)
    {
        cin >> first >> b;
        mansi(first, b);
    }
    return 0;
}
